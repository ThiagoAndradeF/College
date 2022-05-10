/*Faça um algoritmo que faça a geração da série de fibonacci, até o termo n informado pelo usuário. Por exemplo, se o usuário informar o valor 6 deverá ser exibido 8 na tela.

Obs.: Série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, ...*/
/*Na matemática, os números de Fibonacci são uma sequência ou sucessão definida como recursiva pela
fórmula:
F(n + 2) = F(n + 1) + F(n) , com n ≥ 1 e F(1) = F(2) = 1 .*/
#include <iostream>
using namespace std;
int fib (int n)
{
    if(n==1||n==2){
        return 1;
        return fib(n-1)+ fib(n-2);
    }
}

int main(){
    int n1,fb;
    cout<<"Escolha a posição fibonacci "; 
    cin>>n1;
    fb=fib(n1);
    cout<<"o numero de fibonacci selecionado e:  "<<fb;

}