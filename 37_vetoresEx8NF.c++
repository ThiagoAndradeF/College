/*Leia 30 valores e jogue os pares em um vetor e os ímpares em outro. Após a leitura calcule o somatório dos dois vetores e exiba o de maior valor.*/
#include <iostream>
using namespace std;

int main(){
	int numeroPar=0;
	int numeroImpar=0;
	int vetor[30];
	for(int i=0;i<30;i++){
        vetor[i]=i;
		if(vetor[i]%2==0){
			int vetorPar[numeroPar];
			numeroPar=numeroPar+1;
		}
		if(vetor[i]%2!=0){
			int vetorPar[numeroPar];
			numeroImpar=numeroImpar+1;
		}
    }
	for(int i=0;i<numeroPar;i++){
        
        cout<<"Valores pares: "<<vetorPar[i]<<", ";
    }
	return 0;
}