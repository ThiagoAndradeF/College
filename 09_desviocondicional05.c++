#include <iostream>
using namespace std;
int main(){
    int dias, servico,vq, vd;
    cout<<"me diga o numero de dias que voce esta no hotel:\n";
    cin>>dias;
    vq=50*dias;
    ;
    if(dias<10){
        cout<<"\n\no valor a ser pago pelas diarias e  de R$"<< (dias*8.50+vq) <<"\n";
    }
    else if(dias=10){
        cout<<"o valor a ser pago pelas diárias e  de R$"<<((81.5)+vq) <<"\n" ;}
    else{
        cout<<"o valor a ser pago pelas diárias e  de R$"<<((81.5)+(dias-10)*4+vq) <<"\n";}
}