
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