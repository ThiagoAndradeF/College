#include <iostream>
using namespace std;

int main(){
    int dia,mes,ano;
    bool bissexto, validade;
    validade=0;
    bissexto=0;
    cout<<"digite um dia";
    cin>>dia;
    cout<<"digite o numero de um mes";
    cin>>mes;
    cout<<"digite um ano";
    cin>>ano;
    if(mes>12 || mes<=0 ||dia>31){
        cout<<"data invalida";
        return 0;
    }
    if(ano<=1900 || ano>=2100){
        if((ano%4==0 && ano%100!=0)||(ano%400==0)){
        bissexto=1;
        }else{ 
        bissexto=0;
        }   
    }else{
        if((ano%4==0)||(ano%400==0)){
        bissexto=1;
        }else{ 
        bissexto=0;
        }
    }
    switch(mes){
        case(1):case(3):case(5):case(7):case(8):case(10):case(12):
            if(dia<=31){validade=1;}
        break;
        case(4):case(6):case(9):case(11):
        	if(dia<=30){validade=1;}
        break;
        case(2):
            if(bissexto=1){
                if(dia<=29){validade=1;}
            }else{
                if(dia<=28){validade=1;}
            }
        break;
        default:
        break;
    }
    if (validade=1)
    { cout<<"data valida";}else{
        cout<<"data invalida";
    }
    
    return 0;
}