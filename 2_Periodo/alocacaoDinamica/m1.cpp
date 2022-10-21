#include  "biblioMatriz.h"
using namespace std;

void ex1(){
    int co, li;
    int **m;
    m= new int*[li];

    cout<<"Number of columns: ";
    cin>>co;
    cout<<"Number of lines: ";
    cin>>li;

    for(int i=0;i<li;i++){
        m[i]=new int[co];
    }

    preenche(m,li,co);
    cout<<"\n======Matriz normal======\n";
    imprime(m,li,co);

    cout<<"\n\n\n";

    if(li==co){
    transposta(m,li,co);
    cout<<"\n======Matriz transposta======\n";
    imprime(m,li,co);
    }else{
    cout<<"This matrix has not transpose";
      }
    for(int i=0; i<li;i++){
        delete m[i];
    }
    delete m;
}
int main(){
    //ex1();
    }