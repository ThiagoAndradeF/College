using System;
using System.IO.Pipes;
using System.Threading;

class Server
{
    static void Main(string[] args)
    {
        Console.WriteLine("Servidor iniciado...");

        // Configura o pool para permitir um número maior de threads
        ThreadPool.SetMinThreads(20, 20); // Define o mínimo para 20 threads (ajuste conforme necessário)
        ThreadPool.SetMaxThreads(100, 100); // Define o máximo para 100 threads (ou o número que preferir)

        // Cria threads para tratar os pipes
        ThreadPool.QueueUserWorkItem(PipeHandler, "stringPipe");
        ThreadPool.QueueUserWorkItem(PipeHandler, "numberPipe");

        Console.ReadLine();  // Aguarda até que o usuário pressione Enter para encerrar o servidor
    }

    private static void PipeHandler(object pipeName)
    {
        string pipeType = (string)pipeName;

        while (true)
        {
            try
            {
                using (NamedPipeServerStream pipeServer = new NamedPipeServerStream(pipeType, PipeDirection.InOut))
                {
                    Console.WriteLine($"Aguardando conexão no pipe: {pipeType}...");
                    pipeServer.WaitForConnection();

                    using (StreamReader reader = new StreamReader(pipeServer))
                    using (StreamWriter writer = new StreamWriter(pipeServer))
                    {
                        string request = reader.ReadLine();
                        Console.WriteLine($"Requisição recebida: {request}");

                        if (pipeType == "stringPipe")
                        {
                            writer.WriteLine($"Resposta de string: {request.ToUpper()}");
                        }
                        else if (pipeType == "numberPipe" && int.TryParse(request, out int number))
                        {
                            writer.WriteLine($"Número ao quadrado: {number * number}");
                        }

                        writer.Flush();
                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Erro no pipe {pipeType}: {ex.Message}");
            }
        }
    }
}
