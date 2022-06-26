#include <iostream>
#include <time.h>
using namespace std;
int matrizMeia[2][2];
int matrizPrincipal[4][4];
int matrizGabarito[4][4];
int matrizTransposta[4][4];
int matrizLinhaInvertida[4][4];
int matrizColunaInvertida[4][4];
int numE= rand()%3;
int numSorteado;
int main(){ 
srand(time(NULL));
for(int i=0;i<4;i++){//Preencher Matriz Meia
    for(int j=0; j<4;j++){
///Preencher Matriz Principal
for(int i=0;i<4;i++){
    for(int j=0; j<4;j++){
    	numSorteado= rand()%10;
        matrizPrincipal[i][j]=numSorteado; 
        matrizGabarito[i][j]=matrizPrincipal[i][j];
    }
}
 ///Escrever Matriz Principal
for(int i=0;i<4;i++){
    for(int j=0; j<4;j++){
        cout<<matrizPrincipal[i][j]<<" ";
        matrizTransposta[i][j]=matrizPrincipal[j][i];//criar matriz transposta
        matrizLinhaInvertida[3-i][j]=matrizPrincipal[i][j];//criar matriz linhainvertida
        matrizColunaInvertida[i][3-j]=matrizPrincipal[i][j];//criar matriz colunainvertida
    }
    cout<<"\n";
}   
switch(numE){//sortear o tipo de embaralhamento
    case 0:
    	for(int i=0;i<4;i++){
        	for(int j=0; j<4;j++){
           	matrizPrincipal[i][j]= matrizLinhaInvertida[i][j];	
            }
        }	
    break;
    case 1:
    	for(int i=0;i<4;i++){
        	for(int j=0; j<4;j++){
           	matrizPrincipal[i][j]= matrizColunaInvertida[i][j];	
            };
        }
    break;
    case 2:
    	for(int i=0;i<4;i++){
        	for(int j=0; j<4;j++){
           	matrizPrincipal[i][j]= matrizTransposta[i][j];	
            }
         };
	break;	
}
cout<<"\n\n";
	for(int i=0;i<4;i++){//Escrever nova matriz embaralhada
        for(int j=0; j<4;j++){
            cout<<matrizColunaInvertida[i][j]<<" ";
        }
    cout<<"\n";
    };
}

	