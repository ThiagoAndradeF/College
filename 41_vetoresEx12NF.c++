/*Faça um algoritmo que preencha um vetor de 10 posições com valores gerados (utilize o rand), e garanta que não haja números repetidos. A seguir, ordene o vetor e mostre-o na tela.*/
#include <iostream>
#include <time.h>
#define T 10
using namespace std;
int main(){
    srand(time(NULL));
	int vetor[T];
    for(int i=0;i<T;i++){
        vetor[i]=rand()%10;
        for(int j=0;j<i;j++){
        if(vetor[j]==vetor[i]){
            i--;
        }}
    }
    for(int i=0;i<10;i++){
        cout<<vetor[i];
    }
	return 0;
}