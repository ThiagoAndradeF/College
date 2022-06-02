/*Faça um algoritmo que preencha um vetor de 10 posições com valores gerados (utilize o rand), e garanta que não haja números repetidos. A seguir, ordene o vetor e mostre-o na tela.*/
#include <iostream>
#include <time.h>
using namespace std;
int main(){
	int vetor[10];
	int numRand=rand();

    for(int i=0;i<10;i++){
        cout<<"escolha o valor "<<i+1<<" do vetor: ";
        cin>>vetor[i];
    }

	return 0;
}