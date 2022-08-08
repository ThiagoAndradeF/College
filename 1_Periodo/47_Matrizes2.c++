/*Faça um algoritmo que realize as seguintes tarefas com matrizes 3 x 5 de números inteiros:

a) Ler uma matriz A.

b) Ler uma matriz B.

c) Gerar uma matriz C com a soma dos elementos da matriz A e B.

d) Mostrar todos os elementos da linha 2 da matriz C.

e) Mostrar todos os elementos da coluna 3 da matriz C."*/
#include <iostream>
#include <time.h>
using namespace std;
int MatrizA[3][5];
int MatrizB[3][5];
int MatrizC[3][5];
int copiaA, copiaB;
int main(){ 
    for(int i=0;i<3;i++){
   		for(int j=0;j<5;j++){
   			MatrizA[i][j]= rand()%10;
   			MatrizB[i][j]= rand()%10;
   			copiaA=MatrizA[i][j];
   			copiaB=MatrizB[i][j];
   			MatrizC[i][j]=copiaA+copiaB;
   			; 
		   }     
    }
    //A)
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
        	cout<<MatrizA[i][j]<<" ";}
        		cout<<"\n";
    }
    
    cout<<"\n\n\n";
    //B)
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
        	cout<<MatrizB[i][j]<<" ";}
        cout<<"\n";
    }
    cout<<"\n\n\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(i==1){
        	    cout<<MatrizC[i][j]<<" ";}//D)
			}
		cout<<"\n";				
	}
	for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(j==2){
        		cout<<MatrizC[i][j]<<"\n";}//E)
			}			
	}
	
		
	return 0;
}
	
