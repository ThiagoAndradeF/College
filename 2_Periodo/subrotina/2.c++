// Faça o programa principal que solicita ao usuário um número inteiro N e após faça a chamada de ump rocedimento com o nome de “castigo”, passando N como parâmetro por valor. O procedimento deve imprimir N vezes a frase “Não vou colar na Prova”. 
#include <iostream>
#include <math.h>
using namespace std;

void punishment(int numberOfRepetitions){
    for(int i = 0; i < numberOfRepetitions; i++){
        cout<<"I will not cheat on the test \n";
    }
}

int main()
{
    punishment(10);
}