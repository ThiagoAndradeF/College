/*Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de pessoas que possui idade maior ou igual a 18 anos.*/

#include <iostream>
using namespace std;
int main(){
    int idade[10], maiorDeIdade, i;
    maiorDeIdade=0;
    i=0;
    while (i<10)
    {
        
        cout<<"\nDigite sua idade pessoa "<<i<<"\n";
        cin>>idade[i];
        
        if(idade[i]>= 18){
            maiorDeIdade++;
        }
        i++;
    }
    cout<<"O numero de pessoas maior de idade inscritas e de:  "<<maiorDeIdade<<"  pessoa(s)";
    return 0;
}