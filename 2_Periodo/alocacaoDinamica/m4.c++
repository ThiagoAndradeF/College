#include biblioMatriz.h
using namespace std;

void ex4(){
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
    //ex4();
}