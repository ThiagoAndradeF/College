// Faça um programa que possua uma função que receba por parâmetro dois números inteiros positivos num1 e num2 e retorne o resto da divisão inteira de num1 por num2, sem utilizar o operador %. 
#include <iostream>
#include <math.h>
using namespace std;
int remainderOfWholeDivision(int num1, int num2){
    return num1 % num2;
}
int main(){
    cout << remainderOfWholeDivision(20,10);
}
