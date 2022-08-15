// implemente uma função para  somar variáveis do tipo horario, conforme a  struct abaixo. Você deve implementar ainda um main() para entrar com valores de dois horários e usar a função de soma que você implementou. 
#include <iostream>

using namespace std;

struct hour{
    int h, minute, second;
};

void addHours(){
    hour h1,h2,h3,h4;
    cout<<"Write hour, minute and second 1: ";
    cin>>h1.h>>h1.minute>>h1.second;
    cout<<"Write hour, minute and second 2: ";
    cin>>h2.h>>h2.minute>>h2.second;
    cout<<"Write hour, minute and second 3: ";
    cin>>h3.h>>h3.minute>>h3.second;

    h4.h=h1.h+h2.h+h3.h;
    h4.minute=h1.minute+h2.minute+h3.minute;
    h4.second=h1.second+h2.second+h3.second;
    
    if(h4.second>60){
        h4.h+=h4.second/60;
        h4.minute=h4.second%60;
    }

    if(h4.minute>60){
        h4.h+=h4.minute/60;
        h4.minute=h4.minute%60;
    }

    cout<<h4.h<<" : "<<h4.minute<<" : "<<h4.second;
}

int main()
{
    addHours();
}
