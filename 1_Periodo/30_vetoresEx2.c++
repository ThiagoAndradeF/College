/*Construa um algoritmo que solicite 5 valores ao usuário, armazene estes em um vetor de 5 posições inteiras. Após, descubra quantos elementos são maiores do que o elemento da primeira posição.*/
#include <iostream>
using namespace std;

int main(){
    int num=0;
    int value[4];
    for(int i=0;i<5;i++){
        cout<<"digite um numero";
        cin>>value[i];
        if(value[i]>value[0]){
             num= num +1;
        }
    }
    cout<<num<<"  numeros sao maiores que o primeiro numero";
	return 0;
}