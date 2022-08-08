#include<iostream>
using namespace std;

int main(){
    float salario,c1,c2,sob;
    salario=1200;
    cout<<"digite o valor da primeira conta";
    cin>>c1;
    c1=c1*1.02;
    cout<<"digite o valor da segunda conta";
    cin>>c2;
    c2=c2*1.02;
    sob=salario-(c1+c2);
    cout<<"do salário de joão sobra cerca de R$"<<sob<<"\n";

    return 0;
}
