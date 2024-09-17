using System;
using System.IO.Pipes;
using System.Threading;

class Server
{
    static void Main(string[] args)
    {
        Console.WriteLine("Servidor iniciado...");

        // Cria threads para tratar dois pipes nomeados: "stringPipe" e "numberPipe"
        ThreadPool.QueueUserWorkItem(PipeHandler, "stringPipe");
        ThreadPool.QueueUserWorkItem(PipeHandler, "numberPipe");

        Console.ReadLine();  // Aguarda até que o usuário pressione Enter para encerrar o servidor
    }

    private static void PipeHandler(object pipeName)
{
    string pipeType = (string)pipeName;

    while (true)
    {
        using (NamedPipeServerStream pipeServer = new NamedPipeServerStream(pipeType, PipeDirection.InOut))
        {
            Console.WriteLine($"Aguardando conexão no pipe: {pipeType}...");
            pipeServer.WaitForConnection();  // Aguarda uma conexão de um cliente

            using (StreamReader reader = new StreamReader(pipeServer))
            using (StreamWriter writer = new StreamWriter(pipeServer))
            {
                string request = reader.ReadLine();  // Lê a requisição do cliente
                Console.WriteLine($"Requisição recebida: {request}");

                // Lida com os diferentes tipos de pipe
                if (pipeType == "stringPipe")
                {
                    writer.WriteLine($"Resposta de string: {request.ToUpper()}");
                }
                else if (pipeType == "numberPipe" && int.TryParse(request, out int number))
                {
                    writer.WriteLine($"Número ao quadrado: {number * number}");
                }

                writer.Flush();  // Envia a resposta de volta para o cliente
            }
        }
    }
}
}
