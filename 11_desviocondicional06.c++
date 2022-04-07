#include <iostream>
using namespace std;


int main(){
    int ano;
    cout<<"Digite um ano\n";
    cin>>ano;
    if(ano<=1900 || ano>=2100){
        if((ano%4==0 && ano%100!=0)||(ano%400==0)){
        cout<<"\nEsse ano é bissexto";
        }else{ 
        cout<<"\n\nEsse ano nao e bissexto";
        }
    }else{
         if((ano%4==0)||(ano%400==0)){
        cout<<"\nEsse ano é bissexto";
        }else{ 
        cout<<"\n\nEsse ano nao e bissexto";
        }
     }
    return 0;
}