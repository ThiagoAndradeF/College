void imprimirVetor(int *v, int t){
    for(int i=0;i<t;i++){
     cout<<"\n v["<<i<<"]= "<<v[i];
    }
}
void gerarVetor(int *v,int t){
   for(int i=0; i<t; i++){
        cout<<"Digite o valor de v["<<i<<"] ";
        cin>>v[i];
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