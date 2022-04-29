/*Faça um algoritmo que solicite um valor inteiro e informe, ao final, o fatorial deste valor.

Obs.: por exemplo, o fatorial de 5 é 120, pois 5 x 4 x 3 x 2 x 1 = 120.*/

#include <iostream>
using namespace std;
int main(){
    int n1;
    long fatorial;
    cout<<"Digite um valor \n ";
    cin>>n1;
    fatorial=n1;
    if (n1>0){
    while(n1>1){
        --n1;
        fatorial*=n1;
    }
        cout<<fatorial;}
    else{
        cout<<"não exite fatorial de numro negativo";
    }
    return 0;
}