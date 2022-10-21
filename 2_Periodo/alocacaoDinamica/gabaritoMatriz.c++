
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
bool checkPrimeNumber(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void preenche(int **m, int li, int co){
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            m[i][j]= rand()%9;
        }
    }
}
void imprime(int **m, int li, int co){
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void transposta(int **m, int li, int co){
    int mt[li][co];
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            mt[i][j]=m[j][i];
        }
    }
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            m[i][j]=mt[i][j];
        }}}

void matrizA(int **m, int li, int co){
    int contadorPar=0;
    int contadorImpar=1;
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            if(i%2==0){
                m[i][j]=contadorPar;
                contadorPar+=2;
            }else{
                m[i][j]=contadorImpar;
                contadorImpar+=2;
            }
        }
    }
}
void matrizB(int **m, int li, int co){
    int contador=0;
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            if(j%2==0){
                m[i][j]=0;
            }
            if(j%2!=0){
                m[i][j]=1;
            }
        }
    }
}
void matrizC(int **m, int li, int co){
    int contador=0;
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            if(j<=i){
                m[i][j]=0;
            }else{
                m[i][j]=1;
            }
        }
    }
}

int** somarMatriz(int **m1,int **m2,int li,int co){
    int **m3;
    m3= new int *[li];
    for(int i=0; i<co;  i++){
        m3[i]=new int[co];
    }
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
        m3[i][j]= m1[i][j] + m2[i][j];
        }}
        return m3;
        }
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

ex4(){
    int co, li;
    int **m1;

    cout<<"Number of columns: ";
    cin>>co;
    cout<<"Number of lines: ";
    cin>>li;

    m1= new int *[li];
    for(int i =0;i<li;i++){
        m1[i]= new int[co];
    }
    preenche(m1,li,co);
    cout<<"\n\n";
    imprime(m1,li,co);
    for(int i=0;i<li;i++){
        for(int j=0;j<co;j++){
            if(j<i && checkPrimeNumber(m1[i][j])==true){
                   m1[i][j]*=2;}}}

    cout<<"\n\n";
    imprime(m1,li,co);
}



int main(){
    //ex1();
    //ex2();
    //ex3();
    //ex4();
}
