#include <iostream>

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
void decOrdenarVetor(int* v, int t){
    int temp;
    for (int i=0;i<t;i++){
        for (int j=0;j<t-1;j++){
            if(v[j]<v[j+1]){
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

bool evaulateSymmetry(int*v,int t){
    int j=t-1;
    if(t<1){
        return false;
    }else if(t==1){
        return true;
    }else{
    for (int i=0;i<t;i++){
        if(v[i]!=v[j]){
            return false;
        }
        j--;
    }return true;}

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


void ex2(){

    int *vt, *vp, *vs;
    int tt,tp=0,ts=0, sp=0, ss=0;

    cout<<"Write the vector size: ";
    cin>>tt;

    vt= new int[tt];
    vp= new int[tp];
    vs= new int[ts];
    gerarVetor(vt, tt);

    for(int i=0; i<tt;i++){
        if(checkPrimeNumber(vt[i])==true){
            vp[tp]=vt[i];
            sp+=vp[tp];
            tp++;
        }else{
            vs[ts]=vt[i];
            ss+=vs[ts];
            ts++;}}
    if(sp>ss){
    cout<<"\n==========Vetor maior (primos)=========\n";
    imprimirVetor(vp,tp);
    cout<<"\n Valor do somatorio : "<<sp;
    }else{
    cout<<"\n==========Vetor maior (nao primos)=========\n";
    imprimirVetor(vs,ts);
    cout<<"\n\nValor do somatorio : "<<ss;
    }

    delete []vt;
    delete []vp;
    delete []vs;
}

void ex3(){

    int t;
    int *v;
    cout<<"Write the vector size: ";
    cin>>t;
    v = new int[t];

    gerarVetor(v, t);

    if(evaulateSymmetry(v,t)==true){
        cout<<"Essa matriz e simetrica";
    }else{
        cout<<"Essa matriz nao e assimetrica";
    }

    delete []v;

}
void ex4(){
    int t,order;
    int *v;
    cout<<"Write the vector size: ";
    cin>>t;
    v = new int[t];

    gerarVetor(v, t);

    cout<<"Write: \n1- vector ascending order\n2-vector descending order  ";
    cin>>order;
    switch(order){
    case 1:ordenarVetor(v,t);break;
    case 2:decOrdenarVetor(v,t);break;
    }
    imprimirVetor(v,t);
    delete []v;

}


int main()
{
    //ex1();
    //ex2();
    //ex3();
    //ex4();
}
