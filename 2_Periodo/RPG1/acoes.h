#include <time.h>
#include "criaturas.h"
#include "falas.h"

int dado(int lados){
    srand(time(NULL));
    int number=rand()%lados;
    return number;
}
personagem criarPersonagem(){
    personagem person;
    cout<<"Escreva o nome do personagem:  ";
    cin>>person.nome;
    person.habilidade=dado(6)+6;//
    person.energia=dado(6)+12;
    person.sorte=dado(6)+6;
    return person;
}
int ataqueCriatura(criatura monstro){
    int dano = dado(6) + dado(6)+ monstro.habilidade;
    return dano;
}
int ataquePersonagem(personagem person){
    int dano= dado(6) + dado(6)+ person.habilidade;
    return dano;
}

void lutar(personagem person, criatura monstro, bool fuga=true){
    int danoRecebido, danoCausado, number;
    bool fugir=false;   
    while(person.energia>0 || monstro.energia>0 || fugir ==false){
    if(ataquePersonagem(person) - ataqueCriatura(monstro) > 0 ){
        hurtMonster();
        monstro.energia-=2;
        danoCausado+=2;
    }else if(ataquePersonagem(person)- ataqueCriatura(monstro)<0){
        getHurt();
        person.energia-=2;
        danoRecebido+=2;
    }else{
        equalDamage();
    }
    if(fuga==true && (danoCausado>danoRecebido-3) || fuga==true && person.energia==4){
        cout<<"A situação não parece favorável! Porém você ainda tem forças para fungir!\n Digite:\n 0-Para fugir \n 1-Para continuar a luta: "
        cin>>number;
        if(number==0){
            fugir==true;
        }
    } 
    }
}
int tryLuck(personagem person){
    int luckLevel=dado(6)+person.sorte;  
    return luckLevel;  
}

int drawMagic


