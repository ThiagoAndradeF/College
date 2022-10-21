/*ESQUELETO PARA UM JOGO DE LABIRINTO UTILIZANDO RECURSOS APRENDIDOS EM AULA
OBS: O programa tem melhorias óbvias considerando os conteúdos vistos em aula
- Por exemplo, o arquivo não é atualizado no final da execução
Enunciado da atividade feita em aula:
Faça um programa que lê um arquivo com indicações de espaço livre(0), barreira(1), personagem(2)
O jogo deve ter uma função que permite o movimento do personagem pelas posições livres sem deixar rastro
*/
#include <iostream>
#include <fstream>
#include <conio.h> //getch()
#include <windows.h> ///remover

using namespace std;

struct PLAYER {
    int x,y,vision;

    void coord (int li, int co){
        x=li;
        y=co;
    }
};

struct ARQUIVO {
    char* nome;
    int x, y;
    int** m;


    void tam(int li, int co){
        x=li;
        y=co;
    }


    void carrega (){
        m = new int*[x];
        for (int i=0; i<x; i++){
            m[i]=new int[y];
        }

        ifstream mapa;
        mapa.open(nome);
        char c;

        ///coloca na matriz o mapa
        for(int i=0; i<x;i++){
            for(int j=0; j<y;j++){
                    mapa>>c;
                    m[i][j]=c-48;
            }
        }
    }

};
void mostrarCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
void colorir (int cor) {

    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(out, cor);
}
void posicaoxy( int column, int line )
    {
        COORD coord;
        coord.X = column;
        coord.Y = line;
        SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    }

void mostra_mapa (ARQUIVO a, PLAYER p) {
    int linha=0;

    for (int i=p.x-p.vision; i<p.x+p.vision; i++){
        for (int j=p.y-p.vision; j<p.y+p.vision; j++){
            switch(a.m[i][j]){
            case 0: cout<<" "; break;
            case 1: cout<<char(219); break;
            case 2: cout<<char(2); break;
            case 3: cout<<char(1); break;
            }
        }
        //cout<<"\n";
        linha++;
        posicaoxy(0,linha);
    }
}
void mostra_mapa2 (ARQUIVO a, PLAYER p) {
    int linha=0;
    for (int i=p.x-p.vision; i<p.x+p.vision; i++){
        for (int j=p.y-p.vision; j<p.y+p.vision; j++){
            switch(a.m[i][j]){
            case 0: cout<<" "; break;
            case 1: cout<<char(219); break;
            case 2: cout<<char(1); break;
            case 3: cout<<char(2); break;
            }
        }
        linha++;
        posicaoxy(30,linha);
        //cout<<"\n";
    }
}

void mover (PLAYER &p,PLAYER &p2, ARQUIVO &mapa){
    char tecla=getch();
    switch (tecla){
    case 'w':
        if(mapa.m[p.x-1][p.y]==0){
            mapa.m[p.x][p.y]=0;
            mapa.m[p.x-1][p.y]=2;
            p.x=p.x-1;
        }
        break;
    case 's':
         if(mapa.m[p.x+1][p.y]==0){
            mapa.m[p.x][p.y]=0;
            mapa.m[p.x+1][p.y]=2;
            p.x=p.x+1;
        }
        break;
    case 'a':
        if(mapa.m[p.x][p.y-1]==0){
            mapa.m[p.x][p.y]=0;
            mapa.m[p.x][p.y-1]=2;
            p.y=p.y-1;
        }
        break;
    case 'd':
        if(mapa.m[p.x][p.y+1]==0){
            mapa.m[p.x][p.y]=0;
            mapa.m[p.x][p.y+1]=2;
            p.y=p.y+1;
        }
        break;
    case 72:
        if(mapa.m[p2.x-1][p2.y]==0){
            mapa.m[p2.x][p2.y]=0;
            mapa.m[p2.x-1][p2.y]=2;
            p2.x=p2.x-1;
        }
        break;
    case 80:
         if(mapa.m[p2.x+1][p2.y]==0){
            mapa.m[p2.x][p2.y]=0;
            mapa.m[p2.x+1][p2.y]=2;
            p2.x=p2.x+1;
        }
        break;
    case 75:
        if(mapa.m[p2.x][p2.y-1]==0){
            mapa.m[p2.x][p2.y]=0;
            mapa.m[p2.x][p2.y-1]=2;
            p2.y=p2.y-1;
        }
        break;
    case 77:
        if(mapa.m[p2.x][p2.y+1]==0){
            mapa.m[p2.x][p2.y]=0;
            mapa.m[p2.x][p2.y+1]=2;
            p2.y=p2.y+1;
        }
        break;

    }

}
bool ganharGame(PLAYER p1, PLAYER p2){
    for(int i=p1.x-1; i<=p1.x+1;i++){
        for(int j=p1.y-1; j<=p1.y+1;j++){
            if(i==p2.x && j==p2.y){
                return false;
            }}}
    return true;
}

int main()
{
    mostrarCursor(false);
    PLAYER p;
    p.coord(8,10);
    p.vision=3;
    PLAYER p2;
    p2.coord(11,10);
    p2.vision=2;
    ARQUIVO mapa;
    mapa.nome="labirinto.txt";
    mapa.tam(34,51);
    mapa.carrega();

    while(ganharGame(p,p2)==true){
        mostra_mapa(mapa,p);
        mostra_mapa2(mapa,p2);
        mover(p,p2, mapa);

    }

    return 0;
}
