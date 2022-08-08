/*Leia 30 valores e jogue os pares em um vetor e os ímpares em outro. Após a leitura calcule o somatório dos dois vetores e exiba o de maior valor.*/
#include <iostream>
using namespace std;

int main(){
	int vetor[30],vetorP[30],vetorI[30],p=0,im=0,somaI=0,somaP=0;
	for(int i=0; i<30; i++){
		vetor[i]=i;
		
	 	if(vetor[i]%2 == 0){	
	 		vetorP[p]=vetor[i];
	 		somaP+=vetorP[p];
	 		p++;
		}
		
		if(vetor[i]%2!=0 && vetor[i]!=0){
	
			vetorI[im]=vetor[i];
			somaI+=vetorI[im];
			im++;
		}
		
	}
		cout<<"SOMA DOS PARES  "<<somaP<<"\n\n "; 
		cout<<"SOMA DOS IMPARES  "<<somaI<<"\n\n"; 
		cout<<"VETOR PAR:\n";
		for(int i=0; i<p; i++){
			cout<<vetorP[i]<<" ";
		}
		cout<<"\n VETOR IMPAR:\n";
		for(int i=0; i<im; i++){
			cout<<vetorI[i]<< " ";
		}
		
		return 0;	
	}
 


