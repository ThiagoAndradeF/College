// Faça um programa que possua uma função que decida se dois números inteiros positivos são amigos. Dois números são amigos quando a soma dos seus divisores (excluindo o próprio valor) coincide com o outro número. Exemplo: 284 e 220 são amigos. 
#include <iostream>
#include <math.h>
using namespace std;
bool checkFriendNumbers(int number1=0, int number2=0){   
    for(int j = 0; j < number1 && number2; j++){
        if(number1%j==0 && number2%j!=0){
            return false;
        }
    }
    return true;
}
int main()
{
    cout<< checkFriendNumbers(20,30);
}