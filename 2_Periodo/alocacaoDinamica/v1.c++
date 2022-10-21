#include  "biblioMatriz.h"
using namespace std;

using namespace std;

void gerarVetor(int *v,int t){
   for(int i=0; i<t; i++){
        cout<<"Digite o valor de v["<<i<<"] ";
        cin>>v[i];
   }
}
void imprimirVetor(int *v, int t){
    for(int i=0;i<t;i++){
     cout<<"\n v["<<i<<"]= "<<v[i];
    }
}
void ordenarVetor(int* v, int t){
    int temp;
    for (int i=0;i<t;i++){
        for (int j=0;j<t-1;j++){
            if(v[j]>v[j+1]){
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}


void ex1(){
    int t1, t2;
    int *v1, *v2, *v3;
    v1 = new int[t1];
    v2 = new int[t2];
    v3 = new int [t1+t2];
    //escrevendo primeiro vetor
    cout<<"Write the vector one size: ";
    cin>>t1;
    gerarVetor(v1, t1);
    //escrevendo segundo vetor
    cout<<"Write the vector two size: ";
    cin>>t2;
    gerarVetor(v2, t2);

    //escrevendo terceiro vetor
    int t3=t1+t2;
    for(int i=0;i<t1;i++){
        v3[i]=v1[i];
    }

    for(int i=0;i<t2;i++){
        v3[t1+i]=v2[i];
    }

    ordenarVetor(v3,t3);
    imprimirVetor(v3,t3);

    delete []v1;
    delete []v2;
    delete []v3;
}

int main{
    ex1();

}