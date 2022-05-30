/*Versão beta desenvolvida por Thiago Felski Pereira para disciplina de Algoritmos*/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
 ///para o getch()
///https://stackoverflow.com/questions/34474627/linux-equivalent-for-conio-h-getch

using namespace std;


/**
    F L A P B I R D (M2 Algoritmos)
    - Lembrando: não permitido o uso de funções e variáveis compostas como structs, vetores e matrizes
    - Corrigir os rastros (pássaro e obstáculos)
    - Implementar colisão
    - Implementar pontuação (mais um ponto para cada obstáculo superado)
    - Fazer 2 obstáculos simultâneos (obstaculo1 e obstaculo2)
    - Deixar a pontuação visível durante todo o jogo
    - Definir marcos para acelerar a velocidade
*/



int main()
{
    ///ALERTA: NÃO MODIFICAR O TRECHO DE CÓDIGO, A SEGUIR.
    //INICIO: COMANDOS PARA QUE O CURSOR NÃO FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR NÃO FIQUE PISCANDO NA TELA
    //INÍCIO: COMANDOS PARA REPOSICIONAR O CURSOR NO INÍCIO DA TELA
    COORD coord;
    //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO INÍCIO DA TELA
    ///ALERTA: NÃO MODIFICAR O TRECHO DE CÓDIGO, ACIMA.


    int birdX=5, birdY=10, birdXL, birdYL;
    int obstaculo1X=129, obstaculo1Y;
    int obstaculo2X=129, obstaculo2Y;
    int tecla;
    bool birdFly=true;
    int RandCord1=rand()%15+3;
    int RandCord2=rand()%15+3;
    int score=0;
    int scorePositionX,scorePositionY;
    int gameOverPositionX, gameOverPositionY;
    int speed=150;

    ///DESENHO DO CENÁRIO
    cout<<"----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\n                                          Score: "<<score;




    while (birdFly==true) { //esse laço faz o jogo rodar para sempre

        ///POSICIONA O PÁSSARO
        coord.X = birdX;  coord.Y = birdY;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        cout<<char(190);
        birdXL=birdX;
        birdYL=birdY;

        ///POSICIONA O OBSTÁCULO 1 
        obstaculo1Y=1;
        while(obstaculo1Y<20){
            coord.X = obstaculo1X;    coord.Y = obstaculo1Y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            if(obstaculo1Y<RandCord1-2 || obstaculo1Y>RandCord1+2){
                cout<<char(219);
            } else {
                cout<<" ";
            }
            obstaculo1Y++;
            //movimentar o obstaculo criado
            coord.X = obstaculo1X + 1;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout<<" ";
        }
        ///Se coordenada x do obstaculo 1 tiver passado à pouco do bird, ele será excluido
        if(obstaculo1X<2 ){
        obstaculo1Y=1;
        while(obstaculo1Y<20){
            coord.X = obstaculo1X;    coord.Y = obstaculo1Y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout<<" ";
            obstaculo1Y++;}   
        }
        ///POSICIONA O OBSTÁCULO 2
        if(obstaculo1X==65){
        obstaculo2Y=1;
        while(obstaculo2Y<20){
            coord.X = obstaculo2X;    coord.Y = obstaculo2Y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            if(obstaculo2Y<RandCord2-2 || obstaculo2Y>RandCord2+2){
                cout<<char(219);
            } else{
                cout<<" ";
            }
            obstaculo2Y++;
            //movimentar o obstaculo criado
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            coord.X = obstaculo2X+ 1;
            cout<<"";
        }
    }
        ///Se coordenada x do obstaculo 2 tiver passado à pouco do bird, ele será excluido
        if(obstaculo2X<2){
        obstaculo2Y=1;
        while(obstaculo2Y<20){
            coord.X = obstaculo2X;    coord.Y = obstaculo2Y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout<<" ";
            obstaculo2Y++;
			}   
        }
        
        ///VERIFICA COLISÃO
        if((birdY<=0)||(birdY>=20)||(birdX==obstaculo1X && (birdY>RandCord1 + 2 || birdY>RandCord1-2))||((birdX==obstaculo2X && (birdY>RandCord2 + 2 || birdY>RandCord2-2)))){
        	system("cls");
        	birdFly=false;
			cout<<"                                                         Game Over";
			cout<<"\n\n\n\n\n\n                                                Your pontuation were: " <<score<< "\n\n\n\n";
		}
        ///VERIFICA COMANDO DO JOGADOR
        if (kbhit()) { ///verifica se uma tecla foi pressionada
            tecla=getch(); //verifica comando do jogador
        }
        //Subir placar
        if(birdX==obstaculo1X+1 || birdX==obstaculo2X+1 ){
        	score++;
		}
		//Aumentar velocidade
		if(score>1 && score%5==0 && score<30){
			speed-=20;
		}
        ///PÁSSARO CAI 1 POSIÇÃO SE NÃO FOI PRESSIONADO PARA SUBIR
        if ( tecla=='w' || tecla=='W' ){
            birdY--;
            tecla='0';
        } else {
            birdY++;
        }
        ///OBSTÁCULOS AVANÇAM UMA POSIÇÃO PARA ESQUERDA
        obstaculo1X--;
        if(obstaculo1X<65){
        obstaculo2X--;}
        
        ///Se posição do obstáculo 1 é menor que zero no cenário
        if(obstaculo1X<0){
        	while(obstaculo1Y<20){
        		coord.X=obstaculo1X; 
			}
		}
        Sleep(speed);
    }

    return 0;
}
