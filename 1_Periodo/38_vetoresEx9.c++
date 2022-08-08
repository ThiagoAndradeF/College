/*Construa um algoritmo que preencha um vetor com 5 valores inteiros. Após verifique se o número 7 se encontra no vetor. Em caso positivo, exiba qual a posição em que ele foi encontrado. Se ele for encontrado mais de uma vez também quantas vezes ele foi encontrado.*/
#include <iostream>
using namespace std;

int main(){
	int vetor[5];
	int numeroSete;
	for(int i=0;i<5;i++){
        
        cout<<"escolha o valor "<<i+1<<" do vetor: ";
        cin>>vetor[i];
    }
	for(int i=0;i<5;i++){
        if(vetor[i]==7){cout<<"O valor e igual a 7 na posicao: "<<i<<"\n";}
		numeroSete=numeroSete+1;
    }
	cout<<"Totalizando "<<numeroSete<<" vezes que aparece o numero 7 nesse vetor";
	return 0;
}