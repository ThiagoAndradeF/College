#ifndef ACOES_H_INCLUDED
#define ACOES_H_INCLUDED
#include <fstream>
#include <time.h>
#include "criaturas.h"
#include "falas.h"
#include <iostream>
//Criaturas 
struct personagem{
    int habilidade,energia,sorte,magia;
    string nome;

};
struct criatura{
    int habilidade, energia,nivel, nivel, id;
};

criatura hobgoblin{
    hobgoblin.habilidade=7,
    hobgoblin.energia=10,
    hobgoblin.nivel= 1};

criatura fazendeiro{
    fazendeiro.habilidade=8,
    fazendeiro.energia=13,
    fazendeiro.nivel= 1};

criatura centopeiaGigante{
    centopeiaGigante.habilidade=12,
    centopeiaGigante.energia=20,
    centopeiaGigante.nivel=2};



//






int dado(int lados){
    srand(time(NULL));
    int number=rand()%lados;
    return number;
}
personagem criarPersonagem(){
    personagem person;
    person.habilidade=dado(6)+6;
    person.energia=dado(6)+12;
    person.sorte=dado(6)+6;
    person.magia=dado(6)+dado(6);
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
//menu da batalha
void statusPersonagem(personagem person){
    cout<<"---------Você---------\n";
    cout<<"Vida: "<<person.energia<<"\n";
    cout<<"Forca: "<<person.habilidade<<"\n";
    cout<<"Fichas de Magia: "<<person.magia<<"\n";
}
void statusBatalha(personagem person, criatura monstro){
    string nomeMonstro=criaturaNome(monstro);
    cout<<"---------Você---------     ---------"<<nomeMonstro<<"---------\n";
    cout<<"Vida: "<<person.energia<<"     Vida: "<<monstro.energia<<"\n";
    cout<<"Forca "<<person.habilidade<<"     Forca: "<<monstro.habilidade<<"\n";
    cout<<"Fichas de Magia: "<<person.magia;
}

//Simular a luta
void lutar(personagem person, criatura monstro, bool fuga=true){
    int danoRecebido=0, danoCausado=0, number,escolhaAtaque,escolhaMagia;
    bool fugir=false;
    while(person.energia>0 && monstro.energia>0 && fugir ==false){
        statusBatalha(person,monstro);
    //Fugir
    if(fuga==true && (danoCausado>danoRecebido-3) || fuga==true && person.energia==4){

        cout<<"A situacao nao parece favoravel! Porem voce ainda tem forcas para fungir!\n Digite:\n 0-Para fugir \n 1-Para continuar a luta: ";
        cin>>number;
        if(number==0){
            fugir==true;
            person.energia-=2;
            }
    }
    //Menu Luta
    cout<<"1)Dar ataque basico\n2)Lancar Magia";
    cin>>escolhaAtaque;
    //ataque basico mecanica
    if(escolhaAtaque==1){
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
        system("pause");
    }
    //Magia mecanica
    else if(escolhaAtaque==2){
      if(person.magia>1){
        person.magia-=1;
        cout<<"1)Copia de Criatura: Faz uma copia da criatura, para que ela lute por voce\n2)Fogo: Faz criaturas de nivel 1 e 2  correrem\n3)Energia: Recupera energia em quantidade aleatoria\n";
        cin>>escolhaMagia;
        switch(escolhaMagia) {
            case 1:
            if(monstro.nivel>2){
                cout<<"Nao e possivel fazer uma copia de uma criatura tao poderosa";
                system("pause");
            }else{
                cout<<"Voce cria uma copia da criatura para lutar ao seu lado";
                system("pause");
                cout<<"Elas comecam a lutar, enquanto voce se diverte assistindo essas feras se matarem";
                system("pause");
                monstro.energia=0;
            }
            break;
            case 2:
            if(monstro.nivel>2){
                cout<<"Apesar de nao gostar de fogo, o monstro apaga o fogo magico apenas com o seu olhar";
                system("pause");
            }else{
                cout<<"Todos os monstros ao seu redor saem correndo de medo do fogo magico, evocado por suas maos";
                monstro.energia=0;
                system("pause");
            }
            case 3:
                person.energia+=dado(6);
        }
        }else{cout<<"Voce nao tem pontos de magia suficientes para lancar magia";}
    }}
    if(person.energia<1){death();}else if(monstro.energia<1){victory();}

}
void get_line(string tag, int linhas=1)
{
	ifstream textos;
	string texto;
	textos.open("textos.txt");
    setlocale(LC_ALL, "pt_BR.UTF-8");
	do{
		textos >> texto;
	} while(texto != tag);
	for (int i = 0; i <= linhas; i++)
	{
		getline(textos, texto);
		cout << texto << endl;
    }
    setlocale(LC_ALL, "Portuguese");
	textos.close();
}
int tryLuck(personagem &person){
    int luckLevel=dado(6)+person.sorte;
    return luckLevel;
    person.sorte-=1;
}

#endif // CRIATURAS_H_INCLUDED





//fazer fluxo das histórias


#endif // ACOES_H_INCLUDED
