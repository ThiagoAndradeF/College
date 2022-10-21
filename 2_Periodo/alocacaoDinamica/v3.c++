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
void gerarVetor(int *v,int t){
   for(int i=0; i<t; i++){
        cout<<"Digite o valor de v["<<i<<"] ";
        cin>>v[i];
   }
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