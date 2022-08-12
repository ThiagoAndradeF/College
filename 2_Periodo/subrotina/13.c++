// Faça um procedimento que recebe, por parâmetro, um vetor A (25  posições) de inteiros e substitui todos os valores primos de A por zero. O vetor A deve retornar alterado. 
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrimeNumber(int number){
    if(number<2)return false;
    else{
        for(int i=2; i<number; i++){
            if(number%i==0){return false;}}
        return true;
    }
}

void replacePrimeValue(int A[25]){
    for(int i=0; i<25; i++){
        if(checkPrimeNumber(A[i])==true){
            A[i]==0;
        }
    }
    for(int i=0; i<25; i++){
        cout<<A[i]<<"\n";
    }
}


int main()
{}