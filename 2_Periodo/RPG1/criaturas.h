#ifndef CRIATURAS_H_INCLUDED
#define CRIATURAS_H_INCLUDED

#include <iostream>
using namespace std;

struct personagem{
    int habilidade,energia,sorte,magia;
    string nome;

};
struct criatura{
    int habilidade, energia,nivel, id;
};
string criaturaNome(criatura monstro){
   int id= monstro.id;
   switch(id){
   case 1: return " ";break;
   case 2: return " ";break;
   case 3: return " ";break;
   case 4: return " ";break;
   case 5: return " ";break;
   case 6: return " ";break;
   }
}
criatura macacoCachorro{
    macacoCachorro.habilidade = 7;
    macacoCachorro.energia = 4;
}

criatura cachorroMacaco{
    cachorroMacaco.habilidade = 6;
    cachorroMacaco.energia = 6;
}
#endif // CRIATURAS_H_INCLUDED
