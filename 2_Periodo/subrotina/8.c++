// Faça uma função que gere e mostre os dez primeiros primos acima de 100. 
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrimeNumber(int number){
    if(number<2)return false;
    else{
        for(int i=2; i<number; i++){
            if(number%i==0){
                return false;
            }
        }
    return true;
    }
}

void showTeenPrimeNumbersAbove(int number){
    int j=0;
    for(int i=number; j<10; i++){
        if(checkPrimeNumber(i)==true){cout<<"Prime "<<j+1<<" - "<<i<<"\n";j++;}}
}


int main()
{
    showTeenPrimeNumbersAbove(10);
}