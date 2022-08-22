// Elabore um programa que auxilie no controle de uma fazenda de gado que possuí um total de 2000 cabeças de gado. A  base de dados é  formada  por um  conjunto de estruturas (registros) contendo os seguintes campos referente a cada cabeça de gado:código: código da cabeça de gado;leite: número de litros de leite produzido por semana;alim: quantidade de alimento ingerida por semana -em quilos;nasc: data de nascimento -mês e ano; eabate: ‘N’(não) ou ‘S’ (sim).O campo nasc. é do tipo struct data que por sua vez, possui dois campos:mêsanoElaborar funções para:a)Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um vetor de estruturas.b) Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:tenha mais de 5 anos, ou;produza menos de 40 litros de leite por semana, ou;produza até 70 litros de leite por semana e ingira mais de 50 quilos de alimento por dia.Crie o menu de opções para:a)Exibira quantidade total de leite produzida por semana na fazenda;b)Exibira quantidade total de alimento consumido por semana na fazenda; c)Exibira quantidade total de leite que vai ser produzido por semana na fazenda, após o abate;d)Exibira quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate;e)Exibir onúmero de cabeças de gado que irãopara o abate; ef)Sair do programa.
#include <iostream>
using namespace std;
struct date{
    int y,m;
};
struct headGado{
    int codigo;
    float leitePorSemana, alimentoPorSemanaEmKg;
    bool abate;
    date nascimento;
};

void lerVacas(headGado vaca[2]){
    for(int i=0; i<2; i++){
        cout<<"--------Vaca "<<i+1<<"--------";
        cout<<"codigo da Vaca: "<<vaca[i].codigo<<"\n";
        cout<<"codigo da Vaca: "<<vaca[i].codigo<<"\n";
        cout<<"quantidade de leite produzidos por semana: "<<vaca[i].leitePorSemana<<" L"<<"\n";
        cout<<"quantidade de alimento consumido por semana: "<<vaca[i].alimentoPorSemanaEmKg<<" KG"<<"\n";
    }
}
bool verificarAbate(headGado boi){
    if(boi.leitePorSemana<40){return true;}
    else if(boi.leitePorSemana<=70 && boi.alimentoPorSemanaEmKg>350){return true;}
    return false;
}
void processarFazenda(){
    int quantidadeDeVacas, abatesTotais;
    float alimentoPosAbate,totalLeite=0,totalAlimento=0,totalAlimentoPosAbate=0;
    cout<<"Escreva a quantidade de vacas dessa fazenda";    
    cin>>quantidadeDeVacas;
    headGado boi[quantidadeDeVacas];
    for(int i=0; i<quantidadeDeVacas; i++){
        cout<<"--------Boi numero "<<i+1<<"--------";
        cout<<"\nCodigo do Boi: ";
        cin>>boi[i].codigo;
        cout<<"\nQuantidade de leite produzidos por semana: ";
        cin>>boi[i].leitePorSemana;
        cout<<"\nQuantidade de alimento consumido por semana: ";
        cin>>boi[i].alimentoPorSemanaEmKg;
        alimentoPosAbate=boi[i].alimentoPorSemanaEmKg;
        if(verificarAbate(boi[i])==true){
            abatesTotais++;
            alimentoPosAbate=0;}
        totalLeite+=boi[i].leitePorSemana;
        totalAlimento+=boi[i].alimentoPorSemanaEmKg;
        totalAlimentoPosAbate+=alimentoPosAbate;
    }
    int option;
    
    while(option!=1){
    cout<<"Escolha a opcao"<<"\n1)Para sair do programa"<<"\n2)Exibir a quantidade total de leite produzida por semana na fazenda"<<"\n3)Exibir a quantidade total de alimento consumido por semana na fazenda"<<"\n4)Exibir a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate"<<"\n5)Exibir o numero de cabeças de gado que irãopara o abate\n";
    cin>>option;
    switch(option){
        case 1: break;
        case 2:
        cout<<"A quantidade total de de leite que vai ser produzido por semana na fazenda em uma semana e: \n"<<totalLeite<<" L \n";
        system("pause");
        system("cls");
        break;
        case 3:
        cout<<"A quantidade total de alimento consumido por semana na fazendae e: \n "<<totalAlimento<<" KG \n";
        system("pause");
        system("cls");
        break;
        case 4:
        cout<<"A quantidade total de leite que vai ser produzido por semana na fazenda, apos o abates da semana e de: \n"<< totalAlimentoPosAbate<<" L \n";
        system("pause");
        system("cls");
        break;
        case 5:
        cout<<"A quantidade total de abates da semana e de: \n"<<abatesTotais<<" L \n";
        system("pause");
        system("cls");
        break;
    }
}
}
int main(){
     processarFazenda();
}