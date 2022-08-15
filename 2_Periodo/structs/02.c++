// Elabore um programa em C que leia do usuário uma data (criar o tipo data, com dia,mês e ano). Para a verificação da data deve ser feito uma função que receba a data e retorne verdade se ela é  válida  e  falso  caso  contrário. Anos  bissextos  são  dados  pelas  regras  (segundo  o  calendário Gregoriano):i) De 4 em 4 anos é ano bissexto.ii) De 100 em 100 anos não é ano bissexto.iii) De 400 em 400 anos é ano bissexto.iv) Prevalecem as últimas regras sobre as primeiras.A título de curiosidade, o ano de 1900 foi o último ano a ser aplicada a regra ii (não é bissexto). A próxima vez será em 2100.
#include <iostream>

using namespace std;

bool validBissexto(int year){
    if(year%4==0 || (year%100!=0 && year%400==0 ) ){
        return true;
    }return false;
}
bool validYear(int d, int m, int y){
    switch(m){
    case 1: case 3 : case 5: case 7: case 8: case 10: case 12:
        if(0<d<=31){return true;}
        else{return false;}
    break;
    case 2:
        if((0<d<=29 && validBissexto(y)==true)||(d==28 && validBissexto(y)==false)){return true;}
        else{return false ;}
    break;
    default:
        if(0<d<=30){return true;}
        else{return false;}
    break;}
}


int main()
{
    validYear(16, 3 , 2002);
}