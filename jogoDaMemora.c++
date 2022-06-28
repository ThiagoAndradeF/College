#include <iostream>
#include <time.h>
using namespace std;
int vetorMeia[8];
int vetorInteira[16];
int matrizPrincipal[4][4];
int matrizGabarito[4][4];
int matrizTransposta[4][4];
int matrizLinhaInvertida[4][4];
int matrizColunaInvertida[4][4];
int numE= rand()%3;
int numSorteado;
int k=0;
int main(){ 
srand(time(NULL));
//Preencher VetorMeia
for(int i=0;i<8;i++){
    vetorMeia[i]=rand()%8;
    for(int j=0;j<i;j++){
        if(vetorMeia[j]==vetorMeia[i]){
        i--;
        }
    }
}
cout<<"\n\n";
//Preencher VetorInteira com (2 meia)
for(int i=0; i<16;i++){
   if(i<8){
    vetorInteira[i]=vetorMeia[i];
   } 
   if(i>=8){
    vetorInteira[i]=vetorMeia[i-8];
   }
}
///Preencher Matriz Principal
for(int i=0;i<4;i++){
    for(int j=0; j<4;j++){
    	while(vetorInteira[k]!=matrizPrincipal[i][j]){
    		vetorInteira[k]=matrizPrincipal[i][j];
		}
    	k++;
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

	