#include <iostream>
using namespace std;
int main(){
    int dian,anon,mesn,diaa,anoa,mesa, idd;
    cout<<"digite o dia do mês que voce nasceu\n";
    cin>>dian;
    cout<<"digite  mês que voce nasceu\n";
    cin>>mesn;
    cout<<"digite o ano que voce nasceu\n";
    cin>>anon;
    cout<<"digite o dia do mês que voce se encontra\n";
    cin>>diaa;
    cout<<"digite  mês que voce se encontra\n";
    cin>>mesa;
    cout<<"digite o ano que voce se encontra\n";
    cin>>anoa;
    idd=anoa-anon;
    if((dian+(mesn*30))>=(diaa+(mesa*30))){
        idd+=1;
    }
    cout<<idd;
    return 0;
}