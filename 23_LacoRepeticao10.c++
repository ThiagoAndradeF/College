/*Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como entrada, seleciona uma das opções da lista (1- soma, 2- produto, 3- divisão, 4- potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados sejam iguais a zero. Utilize uma variável do tipo real para exibir o resultado.*/

#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
    double n1,n2,soma,subtracao,divisao,multiplicacao,resultado;
    int calculo;

    soma=n1+=n2;
    subtracao=n1-=n2;
    divisao=n1/=n2;
    multiplicacao=n1*=n2;
    n1=1;
    n2=1;
    while (n1!=0 || n2!=0)
    {
        cout<<"VAMOS CALCULAR!!!!!\nDigite o primeiro numero  \n\n";
        cin>>n1;
        cout<<"\nDigite:\n1)Para Somar \n2)Para Dividir \n3)Para Multiplicar \n4)Para Subtrair\n";
        cin>>calculo;
    switch(calculo){
          case 1:
          cout<<"Digite o segundo numero:  " ;
          cin>>n2;
          resultado=n1+n2;
          cout<<"O resultado e:  "<<resultado<<"\n";
          system("pause");
          system("cls");
        break;
           case 2:
          cout<<"Digite o segundo numero:  " ;
          cin>>n2;
          resultado=n1/n2;
          cout<<"O resultado e:  "<<resultado<<"\n"; 
          system("pause");
          system("cls");
        break;
            case 3:
          cout<<"Digite o segundo numero:  " ;
          cin>>n2;
          resultado=n1*n2;
          cout<<"O resultado e:  "<<resultado<<"\n"; 
          system("pause");
          system("cls");
        break;
            case 4:
          cout<<"Digite o segundo numero:  " ;
          cin>>n2;
          resultado=n1-n2;
          cout<<"O resultado e:  "<<resultado<<"\n"; 
          system("pause");
          system("cls");
        break;
    default:
        break;
        
    }
    }


}