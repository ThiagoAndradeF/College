#include <iostream>
using namespace std;


int main(){
    float n1,n2;
    cout<<"digite um numero";
    cin>>n1;
    cout<<"digite outro numero";
    cin>>n2;
    if(n1==n2){
        cout<<"os numeros sao iguais";
    }else if(n1>n2){
        cout<<"o numero "<<n1<<"\n";
    }else{
        cout<<"o numero "<<n2<<"\n";
    }
    return 0;
}