#include <iostream>
#include <time.h>
using namespace std;

int matrizPrincipal[5][5];
int matrizGabarito[5][5];
int matrizTransposta[5][5];
int matrizLinhaInvertida[5][5];
int numE= rand()%3;
int main(){ 
srand(time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            matrizPrincipal[i][j]=i;
            matrizGabarito[i][j]=matrizPrincipal[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cout<<matrizPrincipal[i][j]<<" ";
            matrizTransposta[i][j]=matrizPrincipal[j][i];
        }
        cout<<"\n";
    }   
    switch(numRand){
        case 0://Transposta
            for(int i=0;i<5;i++){
                for(int j=0; j<5;j++){
                matrizTransposta[i][j]=matrizPrincipal[j][i];
                }
            }  
            break;
        case 1://Invertida por linha
            (int i=5;i<1;i--){
                for(int j=5; j<1;j--){
                matrizLinhaInvertida[i][j]=matrizPrincipal[i][j]
                }
            }  
            break;
        case 2://Invertida por coluna
            break;
    } 

}