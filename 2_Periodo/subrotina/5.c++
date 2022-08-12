// Faça uma função que recebe, por parâmetro, um valor N inteiro epositivo e retorna verdadeiro se N for um número perfeito e falso em caso contrário. Obs.: número perfeito é aquele que é igual a soma de seus divisores. 
//O numero é igual a soma de seus divisores

#include <iostream>
#include <math.h>
using namespace std;

bool checkPerfectNumber(int number){
   if(number < 0){return false;}
   else{int sumOfDividers=0;
	for(int i =number-1; i>0;i--){
        if(number%i==0){sumOfDividers+=i;}}
    	if(sumOfDividers==number){return true;}
   		else{return false;}}
}

int main()
{
    cout<<checkPerfectNumber(6);
}