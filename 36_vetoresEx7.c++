/*Faça um programa que carregue um vetor com 10 elementos inteiros e verifique a existência de elementos múltiplos de 5, mostrando as posições em que esses elementos aparecem.*/
#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    for(int i=0;i<10;i++){
        
        cout<<"escolha o valor "<<i+1<<" do vetor: ";
        cin>>vetor[i];
    }
    for(int i=0;i<10;i++){
        if(vetor[i]%5==0&& vetor[i]!=0 ){
            cout<<"o elemento "<<i+1<<"  do vetor 1 e divisivel por 5 \n";
        }
    }
	return 0;
}