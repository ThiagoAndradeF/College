//Faça um algoritmo que leia 10 valores inteiros e mostre a sua soma.




// #include <iostream>;
// using namespace std;
// //UUSANDO APENAS WHILE
// int main(){
//     int n,soma,i;
//     i=0;
//     while(i<10){
//         cout<<"Digite o n"<<i<<"   ";
//         cin>>n;
//         soma+=n;
//         i++;
//     }
//     cout<<"\n\nA soma dos numero digitados e igual a:  "<<soma;
// }



///DIFICULDANDO... USANDO ARRAY E LAÇO FOR
#include <iostream>
using namespace std;
int main(){
int nums[10], i, soma;
int len = sizeof(nums)/sizeof(nums[10])-1;//espécie de calculo para calcular o tamanho do array sem o array.lenght
soma=0;
for(i=0;i<=len;i++){
    cout<<"Digite o numero  "<<i;
    cin>>nums[i];
    soma+=nums[i];
}

cout<<"\n\nA soma dos numero digitados e igual a:  "<<soma;
}
//OBS, TAMBÉM É POSSÍVEL FAZER APENAS COM LAÇO FOR SEM O USO DE ARRAY