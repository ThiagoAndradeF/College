// Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um se for positivo e zero se for negativo. 
#include <iostream>
#include <math.h>
using namespace std;

int positiveOrNegative(int number){
    if(number>0){
        return (1);
    }else{
        return (0);
    }
}


int main()
{
    cout<<positiveOrNegative(29);
    return 0;
}