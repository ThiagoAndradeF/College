#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    //declaração de variáveis
    int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12, soma1,soma2,digv;
    long long int codBarras,codBarras1,min,max;
    //pede codigo de barra
    cout<<"Digite o valor do codigo de barra:\n";
    cin>>codBarras;
    min=999999999999;
    max=10000000000000;
    codBarras1=codBarras;
    if(codBarras>min && codBarras<max){
    d0 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d1 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d2 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d3 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d4 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d5 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d6 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d7 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d8 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d9 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d10 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d11 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
    d12 = codBarras1 % 10;
    codBarras1 = codBarras1 /10;
}//separa o código de barra
cout<<codBarras;

d1=d1*3;
d3=d3*3;
d5=d5*3;
d7=d7*3;
d9=d9*3;
d11=d11*3;
//multiplicar as variaveis d impares por 3
soma1=d1+d2+d3+d4+d5+d6+d7+d8+d9+d10+d11+d12;
//somar variáveis após multiplicação dos impares 
soma2=((soma1/10)+1)*10;
//dividir resultado por 10, depois somar com 1 e multiplicar com 10
digv=(soma2-soma1);
//determinar o digito verificador, com subtração de variáveis anteriores
if(digv%10==0){
	digv==0;
};// determinando se a subtração for igual a 10 é substituido por 0
if(d0==digv){
	cout<<"\ncodigo correto";
} //verificando se o digito verificador determinado pela serie de calculos é mesmo válido e contatando ao usuário //
else if(codBarras<min || codBarras>max){
	cout<< "\nnumero de digitos invalidos";
}// contatando o usuário que o número de caracteres do  código de barras solicitado é inválido// 
else{
	cout<<"\ncodigo verificador inconsistente";
};// contatando o usuário se o número verificador do código solicitado é inconsistente
return 0;
}

