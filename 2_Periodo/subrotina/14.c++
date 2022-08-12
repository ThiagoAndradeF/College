// Faça uma função que receba, por parâmetro, uma matriz A(6x6) e multiplique cada linha pelo elemento da diagonal principal daquela linha. A função deve retornar a matriz alterada para ser mostrada no programa principal. 
#include <iostream>
#include <math.h>
using namespace std;
void multiplyElementByMainDiagonal(int headquarters[6][6]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            headquarters[i][j]= headquarters[i][j]*headquarters[i][i];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<< headquarters[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
}