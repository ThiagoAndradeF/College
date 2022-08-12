// Faça uma função que recebe, por parâmetro, a altura e o sexo de uma pessoa e retorna o seu peso ideal. Para os homens, calcular o peso ideal usando a  fórmula PI = 72,7  *  altura –58, e  para as mulheres PI = 62,1 * altura –44,7.  
#include <iostream>
#include <math.h>
using namespace std;
double idealWeight(double height, char maleOrFemale ){
    int idealWeight;
    if( maleOrFemale == 'm'){
        idealWeight=62.1*height - 44.7;
    }else{
        idealWeight=72.7*height - 58;
    }
    return idealWeight;
}


int main()
{
    cout<<idealWeight(1.60, 'm');
}