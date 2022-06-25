#include <iostream>
#include <time.h>
using namespace std;

int matrizPrincipal[5][5];
int matrizGabarito[5][5];
int matrizTransposta[5][5];
int matrizLinhaInvertida[5][5];
int vetorLinhaInvertida[25];
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
    for(int i=5;i<1;i--){
                for(int j=5; j<1;j--){
                	for(int k=0;k<25;k++){
					vetorLinhaInvertida[k]=matrizPrincipal[i][j];
					}
                }
        	}
            for(int i=0;i<5;i++){
                for(int j=0; j<5;j++){
                	for(int k=0;k<25;k++)
               		matrizLinhaInvertida[i][j]=vetorLinhaInvertida[k];
                }
            }  
        	for(int i=0;i<5;i++){
        		for(int j=0; j<5;j++){
            	cout<<matrizLinhaInvertida[i][j]<<" ";
      			  }
       		 cout<<"\n";
    		}
    switch(numE){
        case 0://Transposta
            for(int i=0;i<5;i++){
                for(int j=0; j<5;j++){
                matrizTransposta[i][j]=matrizPrincipal[j][i];
                }
            }  
            break;
        case 1://Invertida por linha
            for(int i=5;i<1;i--){
                for(int j=5; j<1;j--){
                	for(int k=0;k<25;k++){
					vetorLinhaInvertida[k]=matrizPrincipal[i][j];
					}
                }
        	}
            for(int i=0;i<5;i++){
                for(int j=0; j<5;j++){
                	for(int k=0;k<25;k++)
               		matrizLinhaInvertida[i][j]=vetorLinhaInvertida[k];
                }
            }  
        	for(int i=0;i<5;i++){
        		for(int j=0; j<5;j++){
            	cout<<matrizLinhaInvertida[i][j]<<" ";
      			  }
       		 cout<<"\n";
    		}    
            break;
        case 2://Invertida por coluna
            break;
    } 

}