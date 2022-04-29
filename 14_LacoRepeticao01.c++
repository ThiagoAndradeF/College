//Faça um programa que exiba 30 vezes na tela a mensagem “Olá, tudo bem?”.


//USANDO FOR
// #include <iostream>;
// using namespace std;
// int main(){
//     string Hello = "Ola mundo";
//     int i;
//     for(i=0;i<=30;i++){
//     	cout<<Hello<<"\n";
// 	}
    
// }


//USANDO WHILE
#include <iostream>;
using namespace std;
int main(){
    int i=0;
    string Hello="Ola mundo";
    while(i<30){
        cout<<i<<"-"<<Hello<<"\n";
        i++;
    }
}