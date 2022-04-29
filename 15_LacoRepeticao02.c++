/*Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/

// USANDO WHILE
//#include <iostream>;
// using namespace std;

// int main(){
// double HCI,HZI,HCF, HZF;
// int Tempo;
// HCI=1.50;
// HZI=1.10;
// Tempo=0;
// while((HCI+(Tempo*0.02))>(HZI+(Tempo*0.03))){
//     Tempo++;
// }
// cout<<"Ze demorou "<<Tempo<<" anos para ficar maior que Chico";
//return 0;
// }


//USANDO FOR
#include <iostream>;
using namespace std;

int main(){
    double HCI,HZI,HCF,HZF;
    int Tempo;
    HCI=1.5;
    HZI=1.1;
    for(Tempo=0;(HCI+(Tempo*0.02))>(HZI+(Tempo*0.03));Tempo++){

    }
    cout<<"Ze demorou "<<Tempo<<" anos para ficar maior que Chico";
    return 0;
}