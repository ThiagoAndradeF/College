#include <iostream>
using namespace std;

int main(){
    int dia,mes,ano;
    bool bissexto, validade;
    bissexto=0;
    cout<<"digite um ano";
    cin>>ano;
    cout<<"digite o numero de um mes";
    cin>>mes;
    cout<<"digite um dia";
    cin>>dia;
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
    if(bissexto=1){
        if (mes==1,3,5,7,8,10,12){
            if (dia<=31 && dia>0){
                validade=1;
            }else{
                validade=0;
            }
        }else if(mes==2){
            if (dia<=29 && dia>0)
            {
                validade=1;
            }else{
                validade=0;
            } 
        }else{
            if (dia<=30 && dia>0)
            {
                validade=1;
            }else{
                validade=0;
            } 
        }   
    }else{
        if (mes==1,3,5,7,8,10,12){
            if (dia<=31 && dia>0){
                validade=1;
            }else{
                validade=0;
            }
        }else if(mes==2){
            if (dia<=28 && dia>0)
            {
                validade=1;
            }else{
                validade=0;
            } 
        }else{
            if (dia<=30 && dia>0)
            {
                validade=1;
            }else{
                validade=0;
            } 
        }   
    }
    if(validade=1){
        cout<<"data valida";
    }else{
        cout<<"data invalida";
    }
}
