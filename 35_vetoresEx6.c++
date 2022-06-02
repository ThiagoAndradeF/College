/*Construa um algoritmo que solicite 5 valores inteiros ao usuário e os armazene em um vetor. Após, deverá ser invertido os valores do vetor utilizando um segundo vetor.*/
#include <iostream>
using namespace std;

int main(){
	int vetor[5], vetorInv[5];
	for(int i=0; i<5;i++){

		cout<<"escolha o valor "<<i+1<<" do vetor: ";
		cin>>vetor[i];

		vetorInv[4-i]=vetor[i];
	}
	for(int i=0;i<5;i++){

		cout<<"ao invertermos os valores dos vetores, temos que o vetor "<< i+1<<" = "<<vetorInv[i]<<"\n";


	}
	return 0;
}