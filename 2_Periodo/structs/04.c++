// Faça  um  programa  de controle  dedespesas  e  dados  de  um  condomínio  de  apartamentos.  Os dados de cada apartamento são armazenados em um vetor de estruturas. Para cada apartamento tem-se os seguintes dados: Nome do responsável.Número do apartamento.Área em m2.Número de moradores.Valor a ser pago no mês.Crie a estrutura descrita acima e declare um vetor de estruturas, lembrando que o condomínio possui 40 apartamento. A seguir, crie um menu no main e:Crie uma função que preencha o vetor acima, exceto o campo valor.Informe a área total do condomínio.Informe qual apartamento possui o maior número de moradores, e imprima seus dados. Caso haja mais que um, imprima as informações de todos.Tenha uma opção para sair do programa.
#include <iostream>
using namespace std;
struct apartment{
        string nameOfResponsible;
        int apartmentNumber, residentNumbers;
        float area,rent;};


void registerCondominium(int apartmentNumbers){
    int menuOptions;
    float totalArea=0;
    int numberResidentsALot=1;
    int apALot[numberResidentsALot];
    apALot[0]=0;
    apartment condominium[apartmentNumbers];
    for(int i=0;i<apartmentNumbers;i++){
        cout<<"Write the apartment number: ";
        cin>>condominium[i].apartmentNumber;
        cout<< "Name of responsible to apartment: ";
        cin>>condominium[i].nameOfResponsible;
        cout<<"Number of residents to apartment: ";
        cin>>condominium[i].residentNumbers;
        cout<<"Write the apartment area in square meters: ";
        cin>>condominium[i].area;
        cout<<"Monthly rent amount to apartment: ";
        cin>>condominium[i].rent;
        totalArea+=condominium[i].area;//Area total do condomínio
		
        if(condominium[i].residentNumbers>apALot[0]){
            apALot[0]=condominium[i].apartmentNumber;
            numberResidentsALot=1;
        }else if(condominium[i].residentNumbers==apALot[0]){
            numberResidentsALot++;
            apALot[numberResidentsALot]=condominium[i].apartmentNumber;
        }
        system("cls");
    }   

    cout<<"Choice the desired option"<<"\n 1)Apartments list"<<"\n 2)Number of the most crowded apartment"<<"\n 3)Area of condominium"<<"\n 4)Go out \n";
    cin>>menuOptions;
    switch(menuOptions){

    case 1 : 
        for(int i=0;i<apartmentNumbers;i++){
            cout<<"Apartment number: "<<condominium[i].apartmentNumber<<"\n";
            cout<< "Name of responsible to apartment: "<<condominium[i].nameOfResponsible<<"\n";
            cout<<"Number of residents to apartment: "<<condominium[i].residentNumbers<<"\n";
            cout<<"The Apartment area in square meters: "<<condominium[i].area<<"\n";
            cout<<"Monthly rent amount to apartment: "<<condominium[i].rent<<"\n";
            cout<<"\n\n\n";
            }
            break;
    case 2:
    	cout<<"The  Apartment with most number to residences is: ";
        for(int i=0;i<numberResidentsALot;i++){
            cout<<"\n apartment number "<< apALot[i];}
        break;
    case 3:
        cout<<totalArea;
        break;
    default:

        break;
    }
}



int main(){
	int numberToApartments;
	cout<<"Write the numbers to apartments in you condominium:  ";
	cin>>numberToApartments;
    registerCondominium(numberToApartments);
}