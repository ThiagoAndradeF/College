/*Faça um algoritmo que leia um vetor de 30 posições e informe quantos elementos são múltiplos de 2 e quantos são múltiplos de 3.*/
#include <iostream>
using namespace std;

int main(){
    int position[30];
    for(int i=0; i<31;i++){
        position[i]=i;
        if(position[i]%2==0){
           cout<<i<<"  is a multiple of 2 \n";
       }
        if(position[i]%3==0){
           cout<<i<<"   is a multiple of 3 \n";
       }
       
    }
    
	return 0;
}