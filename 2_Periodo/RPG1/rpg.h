#include <fstream>
#include <time.h>
#include <iostream>
//Criaturas 
using namespace std;
struct personagem{
    int habilidade,energia,sorte,magia;

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



//Falas 
//Falas de combate
void hurtMonster(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"\nVoce ataca o monstro e feri a criatura";break;
        case 1:cout<<"\nO monstro tenta desviar porem a sua determinacao e mais forte";break;
        case 2:cout<<"\nAAAARG... O monstro aguniza de dor apos o seu poderoso ataque";break;
        case 3:cout<<"\nSem piedade voce acerta um dano no monstro";break;
        case 4:cout<<"\nO monstro tenta defender, porem o seu ataque corta a defesa e causa dano ao monstro";break;
    }
    system("pause");
    system("cls");
}
void getHurt(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"\nVocê ataca o monstro, porém ele o ataca de forma implacável e te causa danos";break;
        case 1:cout<<"\nVocê erra o ataque e toma dano direto do monstro";break;
        case 2:cout<<"\nA criatura lhe ataca e suas defesas não são fortes o bastante para resistir ";break;
        case 3:cout<<"\nA criatura lhe acerta um golpe rápido e lhe machuca";break;
        case 4:cout<<"\nO monstro quebra a sua barreira e lhe machuca de forma sorrateira e ardilosa";break;
    }
    system("pause");
    system("cls");
}
void equalDamage(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 3;
    switch(randomNumber){
        case 0:cout<<"\nO monstro lhe ataca mais rapidamente, porém , você consegue se defender";break;
        case 1:cout<<"\nAmbos se atacam, porém a força de ambos os golpes é muito equivalente, e com isso ninguém sofre dano";break;
        case 2:cout<<"\nVocê ataca a criatura, porém a defesa dela é intransigível  ";break;
    }
    system("pause");
    system("cls");
}

void death(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"\nVocê tenta resistir à escuridão porém ela pe mais forte que a sua determinação";break;
        case 1:cout<<"\nApesar de muita força de vontade, o monstro de dilacera com o golpe final";break;
        case 2:cout<<"\nNão longe de sua casa a morte que tentou sempre lhe buscar, enfim consegue";break;
        case 3:cout<<"\nA criatura mostra todo poder em um golpe certeiro no seu corção, o rancando e se deliciando deste artefato tão valoroso";break;
        case 4:cout<<"\nSem piedade, a criatura acerta um golpe tão letal quanto a própria vida e tão ardiloso quanto a própria sombra";break;
        system("pause");
        system("cls");
            system("color 74");
            cout << " " << "\n";
            cout << "                  ########  ########  ##     ##  ########        #####   #           #  ########  ######" << "\n";
            cout << "                  #         #      #  # #   # #  #              #     #   #         #   #         #     #" << "\n";
            cout << "                  #         #      #  #  # #  #  #             #       #   #       #    #         #     #" << "\n";
            cout << "                  #  #####  ########  #   #   #  ########      #       #    #     #     ########  ######" << "\n";
            cout << "                  #      #  #      #  #       #  #             #       #     #   #      #         #  #" << "\n";
            cout << "                  #      #  #      #  #       #  #              #     #       # #       #         #   #" << "\n";
            cout << "                  ########  #      #  #       #  ########        #####         #        ########  #    #" << "\n";
            cout << "\n                                             Pressione [ESPACO] para reiniciar";
            cout << "\n                                             Pressione [ENTER] 2 vezes para sair";
            system("pause");
            while (true)
            {
                if (kbhit())
                {                    /// verifica se uma tecla foi pressionada
                    tecla = getch(); // verifica comando do jogador
                }

                if (tecla == ' ')
                {
                    // main(); /// Reinicia o Jogo
                    // return jogando =true;
                    // break;
                }
                if (tecla == 13)
                {

                    // return 0; /// Fecha o jogo
                    // break;
                }
      }
    }
}
void victory(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"\nA fera tenta resistir ao seu golpe, porém o seu poder e determinação são implacáveis";break;
        case 1:cout<<"\nAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARG.... A fera cai ao chão sem vida";break;
        case 2:cout<<"\nSem medo, você dá o golpe final na fera";break;
        case 3:cout<<"\nVocê dá um golpe final tão letal quanto sua determinação";break;
        case 4:cout<<"\nComo a própria morte, você seifa a vida do monstro";break;
        system("pause");
        system("cls");
    }
}



//Funções do jogo 
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



//Menu da batalha
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



//ler arquivo
void get_line(string tag,char* arquivo, int linhas=1)
{
	ifstream textos;
	string texto;
	textos.open(arquivo);
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







#endif // ACOES_H_INCLUDED
