/*Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Exiba o vetor resultante.*/
#include <iostream>
using namespace std;

int main(){
    int vetor1[10], vetor2[10];
    for(int i=0;i<10;i++){
        cout<<"Selecione o valor  "<<i+1<<"  do primeiro vetor \n";
        cin>>vetor1[i];
        cout<<"Selecione o valor  "<<i+1<<"  do segundo vetor \n";
        cin>>vetor2[i];
        cout<<"o resultado da multiplicacao dos ambos os vetores no indice "<<i<<" e:   "<<vetor1[i]*vetor2[i]<<"\n\n\n";
    }
 	return 0;
}