// Crie  uma  estrutura  para  descrever  os  carros de  uma  determinada  revendedora,  contendo  os seguintes campos:marca: string de tamanho 15ano: inteirocor: string de tamanho 10preço: reala)Crie a estrutura carro. b)Declare o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.Crie um menu para:a)Definir um bloco procedimento para ler o vetor vetcarros. b)Definir um procedimento que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido. c)Definir um procedimento que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor). d)Definir um procedimento que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço. 
#include <iostream>
using namespace std;


struct car{
    string brand,color;
    int year;
    float price;
};

void procedure(int carsNumber){
    car vecCars[carsNumber];
    int choose=0;
    float priceReceived;
    string brandReceived;
    int yearReceived;
    string colorReceived;
    for(int i=0;i<carsNumber;i++){
        cout<<"------Car"<<i+1<<"------";
        cout<<"\nWrite the car brand:  ";cin>>vecCars[i].brand;
        cout<<"\nWrite the car color:  ";cin>>vecCars[i].color;
        cout<<"\nWrite the car year:  ";cin>>vecCars[i].year;
        cout<<"\nWrite the car price:  ";cin>>vecCars[i].price;
        system("cls");
    }
    cout<<"Choice the desired option"<<"\n 1)Cars list"<<"\n 2)To choose the car with price equal or smaller:"<<"\n 3)To choose brand"<<"\n 4)Assess the  existence of the car \n";
    cin>>choose;
    switch(choose){
    case 1:
        for(int i=0;i<carsNumber;i++){
            cout<<"------Car"<<i+1<<"------";
            cout<<"\nThe car brand:  "<<vecCars[i].brand;
            cout<<"\nThe car color:  "<<vecCars[i].color;
            cout<<"\nThe car year:  "<<vecCars[i].year;
            cout<<"\nThe car price:  "<<vecCars[i].price;
        }
        break;
    case 2: 
        cout<<"Car price:  ";
        cin>>priceReceived;
        for(int i=0;i<carsNumber;i++){
        if(vecCars[i].price<=priceReceived){
            cout<<"------Car"<<i+1<<"------";
            cout<<"\nThe car brand:  "<<vecCars[i].brand;
            cout<<"\nThe car color:  "<<vecCars[i].color;
            cout<<"\nThe car year:  "<<vecCars[i].year;
        }
        break;
        }
    case 3:
        cout<<"Car brand:  ";
        cin>>brandReceived;
        for(int i=0;i<carsNumber;i++){
            if(vecCars[i].brand == brandReceived){
                cout<<"------Car"<<i+1<<"------";
                cout<<"\nThe car price:  "<<vecCars[i].price;
                cout<<"\nThe car color:  "<<vecCars[i].color;
                cout<<"\nThe car year:  "<<vecCars[i].year;
            }
        }    
        break;
    case 4:
        cout<<"Car brand:  ";
        cin>>brandReceived;
        cout<<"Car color:  ";
        cin>>colorReceived;
        cout<<"Car year:  ";
        cin>>yearReceived;
        for(int i=0;i<carsNumber;i++){
            if(vecCars[i].price==priceReceived && vecCars[i].color==colorReceived && vecCars[i].year==yearReceived){
                cout<<"car avalible: \n";
                cout<<"\nThe car brand:  "<<vecCars[i].brand;
                cout<<"\nThe car color:  "<<vecCars[i].color;
                cout<<"\nThe car year:  "<<vecCars[i].year;
                cout<<"\nThe car price:  "<<vecCars[i].price;
            }else{
                cout<<"car not found";
            }
        }
        break;
    case 5: 
        break;
    default:
        while(5>choose<1){
        cout<<"Choice other number: ";
        cin>>choose;}}}


int main(){
    procedure(1);
}