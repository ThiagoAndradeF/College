// Faça uma função que calcule o valor da série S descrita a seguir para um valor n>0 a ser fornecido como parâmetro para a mesma. 
#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n){
    int nFactorial=1;
    for(int i=1; i<=n; i++){nFactorial*=i;}
    return nFactorial;
}


int combinationFunction(int n, int k)
{
    if(n<0 || k<0) return false;
    else{
        int nFactorial=factorial(n), kFactorial=factorial(k);
        int combination=nFactorial/(kFactorial*factorial(n-k));
        return combination;
    }
}


int main()
{
	cout<<combinationFunction(6,2);
}
