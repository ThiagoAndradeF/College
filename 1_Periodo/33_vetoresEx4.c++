/*Fazer um programa que leia dois vetores unidimensionais A e B, de tamanho 8, e realize a troca dos elementos destes vetores; ou seja, após a execução do programa o vetor B deverá conter os valores fornecidos para o vetor A, e vice-versa.*/
#include <iostream>
using namespace std;
int vetor1[8], vetor2[8], vetor1C[8], vetor2C[8];
int main(){
    for(int i=0; i<8; i++){
        cout<<"Escreva o valor "<<i+1<<" do vetor 1 \n";
        cin>>vetor1[i];
        cout<<"Escreva o valor "<<i+1<<" do vetor 2 \n";
        cin>>vetor2[i];

        vetor1C[i]=vetor1[i];
        vetor2C[i]=vetor2[i];
        
        vetor1[i]=vetor2C[i];
        vetor2[i]=vetor1C[i];

        cout<<"o valor do vetor 1 no elemento "<<i+1<<" (se trocarmos a numeracao do vetor) e igual: "<<vetor1[i]<<"\n";
        cout<<"o valor do vetor 2 no elemento "<<i+1<<" (se trocarmos a numeracao do vetor) e igual a: "<<vetor2[i]<<"\n";

    }


	return 0;
}