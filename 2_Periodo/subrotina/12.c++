// Faça uma função que receba como parâmetros dois vetores de inteiros com 5 posições. A função deve retornar verdadeiro se a média dos elementos dos dois vetores forem iguais e falso se as médias forem diferentes. 
#include <iostream>
#include <math.h>
using namespace std;


bool equalAverages(int vector1[5], int vector2[5]){
    int sumVector1=0, sumVector2=0;
    for(int i=0; i<5; i++){
    sumVector1+=vector1[i];
    sumVector2+=vector2[i];}
    if(sumVector1 == sumVector2){
        return true;
    }else{return false;}
} 


int main()
{}