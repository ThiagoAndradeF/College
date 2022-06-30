#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{
int vetorMeia[8];
int vetorInteira[16];
int matrizPrincipal[4][4];
int matrizGabarito[4][4];
int matrizTransposta[4][4];
int matrizLinhaInvertida[4][4];
int matrizColunaInvertida[4][4];
int matrizJogo[4][4];
char matrizVazia[4][4];
char matrizVaziaCopia[4][4];
int numE = rand() % 4;
int numSorteado;
int jogadas = 0;
bool jogando = true;
int k = 0;
int x1, y1, x2, y2;
int tecla;
int duplasAcertadas=0;
    srand(time(NULL));
    // Preencher VetorMeia
    for (int i = 0; i < 8; i++)
    {
        vetorMeia[i] = rand()%8;
        if(vetorMeia[i]==7){
            vetorMeia[i]=11;
        }
        if(vetorMeia[i]==0){
            vetorMeia[i]=12;
        }
        for (int j = 0; j < i; j++)
        {
            if ((vetorMeia[j] == vetorMeia[i]))
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
            matrizVaziaCopia[i][j]=matrizVazia[i][j];
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
    case 3: 
        break;
    }

    // Criando Matriz Jogo
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrizJogo[i][j] = matrizPrincipal[i][j];
        }
    };
    //
    while (jogando == true){
    	if (jogadas <= 24)//jogo rodando
        {
        for (int i = 0; i < 4; i++)
        {//determinar matriz copia da vazia
        for (int j = 0; j < 4; j++)
        {
            matrizVaziaCopia[i][j] = matrizVazia[i][j];
        }
        };     
        do{ 
			system("cls");
        	for (int i = 0; i < 4; i++)
        	{ // Escrever nova matriz VAZIA
            for (int j = 0; j < 4; j++)
            {
               cout << matrizVazia[i][j] << " ";
            }
           cout << "\n";
        	};
        	cout << "Jogadas Restantes " << (24 - jogadas) << "\n"; // mostrar numero de jogadas
            cout<< "Numero de duplas formadas: "<<duplasAcertadas<<"\n"<<"Falta so achar: "<<(8-duplasAcertadas)<<"\n\n";
            cout << "Informe a primeira posicao(de 1 a 4) da peca escolhida \n"<<"Para: x  y \n";
            cin>> x1 >> y1;
            cout << "Informe a segunda posicao(de 1 a 4) da peca escolhida \n"<<"Para: x  y \n";
            cin >> x2 >>y2;
            if((x1<1 || x1>4) || (y1<1 || y1>4) || (x2<1 || x2>4) || (y2<1 || y2>4) || ((x1==x2)&&(y1==y2))){
            	cout<<"Jogada invalida\n";
            	system("pause");
			}
			
			}while((x1<1 || x1>4) || (y1<1 || y1>4) || (x2<1 || x2>4) || (y2<1 || y2>4) || ((x1==x2)&&(y1==y2)));	
//            cout<<"x1: "<<x1<<"\ny1: "<<y1<<"\nx2: "<<x2<<"\ny2: "<<y2;
//            system("pause");
            if(matrizJogo[x1-1][y1-1]==matrizJogo[x2-1][y2-1]){
            	duplasAcertadas++;
                matrizVazia[x1-1][y1-1]=matrizJogo[x1-1][y1-1];
                matrizVazia[x2-1][y2-1]=matrizJogo[x2-1][y2-1];
                }else{
                matrizVaziaCopia[x1-1][y1-1]=matrizJogo[x1-1][y1-1];
                matrizVaziaCopia[x2-1][y2-1]=matrizJogo[x2-1][y2-1];
                for (int i = 0; i < 4; i++)
                    { // Escrever nova matriz embaralhada
                    for (int j = 0; j < 4; j++)
                         {
                            cout << matrizVaziaCopia[i][j] <<" ";
                         }
                    cout << "\n";
                };
                system("pause");
        	}
			if(duplasAcertadas==8){
				system("cls");
			cout << "########         #####	     #####      #####        ########  ########  ##     ##  ########"<< endl;
            cout << "#               #     #     #     #    #     #       #         #      #  # #   # #  #       "<< endl;
            cout << "#              #       #   #       #   #      #      #         #      #  #  # #  #  #       "<< endl;
            cout << "#  #####       #       #   #       #   #       #     #  #####  ########  #   #   #  ########"<< endl;
            cout << "#      #       #       #   #       #   #      #      #      #  #      #  #       #  #       " << endl;
            cout << "#      #        #     #     #     #    #     #       #      #  #      #  #       #  #       "<< endl;
            cout << "########         #####       #####      #####        ########  #      #  #       #  ########"<< endl;
            cout << "\n\n                                     Voce ganhou em: " << jogadas << " jogadas";
            cout << "\n                                  Pressione [ESPACO] para reiniciar";
            cout << "\n                                  Pressione [ENTER] 2 vezes para sair\n";
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
			system("Pause");
			}
			jogadas++; // aumentar jogadas
            system("cls");
        }
        else
        {          
            system("cls");
            cout << " " << endl;
            cout << "                  ########  ########  ##     ##  ########        #####   #           #  ########  ######" << endl;
            cout << "                  #         #      #  # #   # #  #              #     #   #         #   #         #     #" << endl;
            cout << "                  #         #      #  #  # #  #  #             #       #   #       #    #         #     #" << endl;
            cout << "                  #  #####  ########  #   #   #  ########      #       #    #     #     ########  ######" << endl;
            cout << "                  #      #  #      #  #       #  #             #       #     #   #      #         #  #" << endl;
            cout << "                  #      #  #      #  #       #  #              #     #       # #       #         #   #" << endl;
            cout << "                  ########  #      #  #       #  ########        #####         #        ########  #    #" << endl;
            cout << "\n\n ";                                           
            cout << "\n                                             Pressione [ESPACO] para reiniciar";
            cout << "\n                                             Pressione [ENTER] 2 vezes para sair\n";
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
                    return jogando =true;
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
  