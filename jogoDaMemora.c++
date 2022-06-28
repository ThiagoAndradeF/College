#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
using namespace std;
int vetorMeia[8];
int vetorInteira[16];
int matrizPrincipal[4][4];
int matrizGabarito[4][4];
int matrizTransposta[4][4];
int matrizLinhaInvertida[4][4];
int matrizColunaInvertida[4][4];
int matrizJogo[4][4];
char matrizVazia[4][4];
int numE = rand() % 3;
int numSorteado;
int jogadas = 0;
bool jogando = true;
int k = 0;
int x1, y1, x2, y2;
int tecla;
int duplasAcertadas=0;
int main()
{
    srand(time(NULL));
    // Preencher VetorMeia
    for (int i = 0; i < 8; i++)
    {
        vetorMeia[i] = rand() % 8;
        for (int j = 0; j < i; j++)
        {
            if (vetorMeia[j] == vetorMeia[i])
            {
                i--;
            }
        }
    }
    // Preencher VetorInteira com (2 meia)
    for (int i = 0; i < 16; i++)
    {
        if (i < 8)
        {
            vetorInteira[i] = vetorMeia[i];
        }
        if (i >= 8)
        {
            vetorInteira[i] = vetorMeia[i - 8];
        }
    }
    /// Preencher Matriz Principal
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            while (matrizPrincipal[i][j] != vetorInteira[k])
            {
                matrizPrincipal[i][j] = vetorInteira[k];
            }
            k++;
            matrizGabarito[i][j] = matrizPrincipal[i][j];
        }
    }
    /// criação dos embaralhamentos
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrizTransposta[i][j] = matrizPrincipal[j][i];          // criar matriz transposta
            matrizLinhaInvertida[3 - i][j] = matrizPrincipal[i][j];  // criar matriz linhainvertida
            matrizColunaInvertida[i][3 - j] = matrizPrincipal[i][j]; // criar matriz colunainvertida
            matrizVazia[i][j]= char(220);
        }
    }
    switch (numE)
    { // sortear o tipo de embaralhamento
    case 0:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                matrizPrincipal[i][j] = matrizLinhaInvertida[i][j];
            }
        }
        break;
    case 1:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                matrizPrincipal[i][j] = matrizColunaInvertida[i][j];
            };
        }
        break;
    case 2:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                matrizPrincipal[i][j] = matrizTransposta[i][j];
            }
        };
        break;
    }
           cout << "\n\n";
           for (int i = 0; i < 4; i++)
           { // Escrever nova matriz embaralhada
               for (int j = 0; j < 4; j++)
               {
                   cout << matrizVazia[i][j] << " ";
               }
               cout << "\n";
           };

    // Criando Matriz Jogo
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrizJogo[i][j] = matrizPrincipal[i][j];
        }
    };
    //
    while (jogando == true)
    {
        
        if (jogadas <= 24)
        {
            cout << "Jogadas Restantes " << (24 - jogadas) << "\n"; // mostrar numero de jogadas
            cout<< "Numero de duplas formadas: "<<duplasAcertadas<<"\n"<<"Falta so achar: "<<(8-duplasAcertadas)<<"\n\n";
            // pedir dados de comparação
            cout << "Informe a primeira posicao(de 1 a 4) da peca escolhida \n"<<"Para: x (horizontal- esquerda para direita)\n";
            cin >> x1;
            cout << "Informe a primeira posicao(de 1 a 4) da peca escolhida  \n"<<"Para: y (vertical- cima para baixo)\n";
            cin >> y1;
            cout << "Informe a posicao(de 1 a 4) da peca correspondente \n"<< "Para: x (horizontal- esquerda para direita)\n";
            cin >> x2;
            cout << "Informe a primeira posicao(1 a 4) da peca correspondente \n"<< "Para: y(vertical- cima para baixo)\n";
            cin >> y2; 
            if(matrizJogo[x1-1][y1-1]==matrizJogo[x2-1][y2-1]){
            	duplasAcertadas++;
			}
			if(duplasAcertadas==8){
				cout<<"\nParabens, você ganhou\n";
			}
			jogadas++; // aumentar jogadas
            system("cls");
        }
        else
        {
            return jogando == false;
            system("cls");
            continue;
            system("color 74");
            cout << " " << endl;
            cout << "                  ########  ########  ##     ##  ########        #####   #           #  ########  ######" << endl;
            cout << "                  #         #      #  # #   # #  #              #     #   #         #   #         #     #" << endl;
            cout << "                  #         #      #  #  # #  #  #             #       #   #       #    #         #     #" << endl;
            cout << "                  #  #####  ########  #   #   #  ########      #       #    #     #     ########  ######" << endl;
            cout << "                  #      #  #      #  #       #  #             #       #     #   #      #         #  #" << endl;
            cout << "                  #      #  #      #  #       #  #              #     #       # #       #         #   #" << endl;
            cout << "                  ########  #      #  #       #  ########        #####         #        ########  #    #" << endl;
            cout << "\n\n                                                  Você acertou em: " << jogadas << "jogadas";
            cout << "\n                                             Pressione [ESPACO] para reiniciar";
            cout << "\n                                             Pressione [ENTER] 2 vezes para sair";
            system("pause");
            while (true)
            {
                if (kbhit())
                {                    /// verifica se uma tecla foi pressionada
                    tecla = getch(); // verifica comando do jogador
                }

                if (tecla == ' ')
                {
                    main(); /// Reinicia o Jogo
                    break;
                }
                if (tecla == 13)
                {

                    return 0; /// Fecha o jogo
                    break;
                }
            }
        }
    }
}
