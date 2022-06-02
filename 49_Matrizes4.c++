"Faça um programa que leia uma matriz 4 x 4 e que logo em seguida realize o somatório de todos elementos contidos na diagonal principal. Exiba o resultado."
#include <iostream>
#include <time.h>
using namespace std;
int Matriz[4][4];
int somatorio=0;
int main(){ 
    for(int i=0;i<4;i++){

   		for(int j=0;j<4;j++){
   			Matriz[i][j]= rand()%10;
               if(i==j){
                 somatorio+=Matriz[i][j];
               }
               
               }
		}

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        cout<<Matriz[i][j]<<" ";}
        cout<<"\n";
    }
    cout<<"O somatorio de todos os elementos da diagonal principal da matriz matriz e: "<<somatorio; 
	return 0;
}