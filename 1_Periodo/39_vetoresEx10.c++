/*Faça um algoritmo que preencha um vetor de 10 posições com números aleatórios (entre 10 e 30) e informe quantos números são múltiplos de 5, e em que posição se encontram.*/
#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int numRand;
	int divCinco=0;
	int vetor[30];
	for(int i=0;i<30;i++){
        numRand= rand()%21+10;
        vetor[i]=numRand;
    }
	for(int i=0;i<30;i++){
		vetor[i];
		if(vetor[i]%5==0 && vetor[i]!=0){
			cout<<"O valor na posicao "<<i<<" do vetor e divisivel por 5\n";
			divCinco=divCinco+1;
		}
	}
	cout<<"\n\nLOGO:  Existem " <<divCinco <<" elementos divisiveis por 5 nesse vetor";
	return 0;
	}