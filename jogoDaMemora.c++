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
int matrizJogo[4][4];
int numE= rand()%3;
int numSorteado;
int k=0;
bool jogando=true;
int main(){
if(jogando){
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
    	while(matrizPrincipal[i][j]!=vetorInteira[k]){
    		matrizPrincipal[i][j]=vetorInteira[k];
		}
    	k++;
        matrizGabarito[i][j]=matrizPrincipal[i][j];
        }
    }
///criação dos embaralhamentos
for(int i=0;i<4;i++){
    for(int j=0; j<4;j++){
        matrizTransposta[i][j]=matrizPrincipal[j][i];//criar matriz transposta
        matrizLinhaInvertida[3-i][j]=matrizPrincipal[i][j];//criar matriz linhainvertida
        matrizColunaInvertida[i][3-j]=matrizPrincipal[i][j];//criar matriz colunainvertida
    }
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

//Criando Matriz Jogo 
for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
           	matrizJogo[i][j]=matrizPrincipal[i][j];	
        }
};
cout<<"Informe "

if(jogadas>24){
    return 
}
}