/*"Elabore um programa que preencha uma matriz (utilizando sorteia) 5 x 5, e logo após identifique o maior elemento da matriz. Exiba o resultado."*/
#include <iostream>
#include <time.h>
using namespace std;
int Matriz[5][5];
int somatorio=0;
int main(){ 
    for(int i=0;i<5;i++){

   		for(int j=0;j<5;j++){
   			Matriz[i][j]= rand()%10;
   			somatorio+= Matriz[i][j];
		   }     
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        cout<<Matriz[i][j]<<" ";}
        cout<<"\n";
    }
    cout<<"O somatorio de todos os elementos da matriz e: "<<somatorio; 
	return 0;
}