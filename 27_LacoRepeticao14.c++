/*Faça um programa que verifica se um número digitado pelo usuário é um número primo, ou seja, um número que só é divisível por 1 e por ele mesmo. Saídas:

• Pedido ao usuário = “Digite um número inteiro:” · Caso seja primo = “O número é primo”;

• Caso não seja primo = “O número não é primo”.*/

#include <iostream>
using namespace std;
int main(){
    int n1,i;
    cout<<"digite um numero";
    cin>>n1;
    for(i=2; i<=n1;i++){
    -´~    if(i==0 && i==n1 && n1/i==1)(cout<<"esse numero não é primo");
    }
    {}
    return 0;
}
