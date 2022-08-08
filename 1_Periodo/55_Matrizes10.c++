/*"Elabore um programa que preencha uma matriz 5 x 5. Em seguida, o programa deve fornecer e exibir o somatório de todos elementos da área em azul."*/
#include <iostream>
using namespace std;
int numE;
int numerosAleatorios[10];    
int main(){
    srand(time(NULL));
    
    for(int i=0;i<10;i++){
        numE= rand()%4;
        numerosAleatorios[i]=numE;
        cout<<numerosAleatorios[i]<<", ";
    }
}