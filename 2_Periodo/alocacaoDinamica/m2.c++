#include  "biblioMatriz.h"
using namespace std;

void ex2(){
    int li, co, choose;
    int **m;

    cout<<"Number of matrix proportion : ";
    cin>>co;
    li=co;

    m= new int*[li];
    for(int i=0;i<li;i++){
        m[i]=new int [co];
    }
    cout<<"Choose the style matrix. \n 1)Par impar \n2)Modificada\n3)Boladona\n";
    cin>>choose;
    switch(choose){
    case 1: matrizA(m,li,co); break;
    case 2: matrizB(m,li,co); break;
    case 3: matrizC(m,li,co); break;
    }
    imprime(m,li,co);
    for(int i=0; i<li;i++){
        delete m[i];
    }
    delete m;
}


int main(){
    //ex2();
}
