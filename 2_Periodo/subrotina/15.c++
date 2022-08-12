// Faça um programa que utilize uma matriz com dimensões máximas de 5 x 4 (cinco linhas por quatro colunas). O preenchimento da matriz (que será randômico –usando rand()) será efetuado da seguinte forma: •se o número sorteado for par, deve ser armazenado em uma linha de índice par; •se o número for ímpar, deve ser armazenado em uma linha de índice ímpar; •as linhas devem ser preenchidas de cima para baixo (por exemplo, os números pares digitados devem ser  armazenados inicialmente na  primeira linha  par;  quando  essa  linha  for  totalmentepreenchida, deve ser utilizada a segunda linha par e assim sucessivamente. O mesmo processo deve ser adotado para os números ímpares); •quando não couberem mais números pares ou ímpares deve ser mostrada uma mensagem ao usuário informando que as linhas pares/ímpares não tem mais espaço; •quando a matriz estiver totalmente preenchida, deve-se encerrar a leitura dos números e mostrar todos os elementos armazenados na matriz. 
#include <iostream>
#include <math.h>
using namespace std;


void programFelsk(int headquarter[5][4]){
    for(int i=0; i<5; i++){for(int j=0; j<4; j++){headquarter[i][j]= 0;}}
    headquarter[0][0] = 0;
    while(headquarter[5][4]==0 && headquarter[4][4]==0){
    int currentNumber;
    cout<<"Write a number: ";
    cin>> currentNumber;
    
    if(currentNumber%2!=0){
        if(headquarter[1][4]==0){for(int i=0; i<4; i++){headquarter[1][i]=currentNumber;}
        }else if( headquarter[3][4]==0){for(int i=0; i<4; i++){headquarter[3][i]=currentNumber;}
        }else if(headquarter[5][4]==0){for(int i=0; i<4; i++){headquarter[5][i]=currentNumber;}
        }else{cout<<"No more space for odd numbers";}}
    
    if(currentNumber%2==0){
        if(headquarter[2][4]==0){for(int i=0; i<4; i++){headquarter[2][i]=currentNumber;}
        }else if( headquarter[4][4]==0){for(int i=0; i<4; i++){headquarter[4][i]=currentNumber;}
        }}else{cout<<"No more space for pairs numbers";}}
}




int main(){
    

}

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<4; j++){
    //         if(headquarter[i][j]%2!=0){

    //         }
    // }}