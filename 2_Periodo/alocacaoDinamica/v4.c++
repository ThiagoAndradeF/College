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
