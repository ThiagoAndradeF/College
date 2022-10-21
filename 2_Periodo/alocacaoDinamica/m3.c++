#include  "biblioMatriz.h"
using namespace std;

void ex3(){
    int co, li;
    int **m1, **m2,**m3;

    cout<<"Number of columns: ";
    cin>>co;
    cout<<"Number of lines: ";
    cin>>li;

    //Preencher matriz 1
    m1=new int*[li];
    for(int i=0;i<li;i++){
        m1[i]= new int [co];
    }
    preenche(m1,co,li);

    //Preencher matriz 2
    m2=new int*[li];

    for(int i=0;i<li;i++){
        m2[i]= new int [co];
    }
    preenche(m2,co,li);

    //Preencher matriz soma
    m3=new int*[li];
    for(int i=0;i<li;i++){
        m3[i]=new int[co];
    }
    m3=somarMatriz(m1,m2,li,co);

    imprime(m1,li,co);
    cout<<"\n\n";
    imprime(m2,li,co);
    cout<<"\n\n";
    imprime(m3,li,co);

}

int main(){
    //ex3();
}