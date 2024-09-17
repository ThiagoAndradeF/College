using System;
using System.IO.Pipes;
using System.IO;

class Client
{
    static void Main(string[] args)
    {
        Console.WriteLine("Digite 'S' para string ou 'N' para número:");
        string tipo = Console.ReadLine().ToUpper();  // Lê a entrada do usuário e converte para maiúsculas
        string pipeName = tipo == "S" ? "stringPipe" : "numberPipe";  // Define o nome do pipe com base na escolha do usuário

        using (NamedPipeClientStream pipeClient = new NamedPipeClientStream(".", pipeName, PipeDirection.InOut))
        {
            pipeClient.Connect();  // Conecta ao servidor de pipe
            Console.WriteLine($"Conectado ao servidor no pipe {pipeName}");
            using (StreamReader reader = new StreamReader(pipeClient))
            using (StreamWriter writer = new StreamWriter(pipeClient))
            {
                Console.WriteLine("Digite o valor da requisição:");
                string request = Console.ReadLine();  // Lê a requisição do usuário

                writer.WriteLine(request);  // Envia a requisição para o servidor
                writer.Flush();  // Garante que os dados sejam enviados imediatamente

                string response = reader.ReadLine();  // Lê a resposta do servidor
                Console.WriteLine($"Resposta do servidor: {response}");  // Exibe a resposta do servidor
            }
        }
    }
}
