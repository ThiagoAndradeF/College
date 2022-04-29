#include <iostream>
using namespace std;
int main(){
    int n,somaDosPares,quantidadeDePares;
    double mediaDosPares;
    n=1;
    quantidadeDePares=0;
    while(n!=0)
    {
        cout<<" Digite um numero: \n";
        cin>>n;
        if(n%2==0 && n!=0){
        	quantidadeDePares++;
        	somaDosPares+=n;
		}
        }
    mediaDosPares=somaDosPares/quantidadeDePares;
	cout<<"A media dos numeros pares e: "<<mediaDosPares;
    return 0;
    
    // cout<<"A quantidade de numeros pares digitados foi: "<<quantidadeDePares<<"\n\n";
    // cout<<"A somas dos numeros pares digitados foi: "<<somaDosPares<<"\n\n"; 
}