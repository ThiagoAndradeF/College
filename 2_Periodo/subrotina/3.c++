// Elabore um programa que calcule o M.D.C. (máximo divisor comum) entre dois valores fornecidos pelo usuário. Por exemplo: M.D.C. de 12 e 20 é 4.  
#include <iostream>
#include <math.h>
using namespace std;
int MDC(int n1, int n2){
    while(n2!=n1){
    if (n1<n2){
        n2=n2-n1;
    }else{
        n1=n1-n2;}
    }return n1;}
int main()
{
    cout<<MDC(12, 20);
}