#ifndef FALAS_H_INCLUDED
#define FALAS_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
using namespace std;
int tecla;
//Falas de combate
void hurtMonster(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"Voce ataca o monstro e feri a criatura";break;
        case 1:cout<<"O monstro tenta desviar porem a sua determinacao e mais forte";break;
        case 2:cout<<"AAAARG... O monstro aguniza de dor apos o seu poderoso ataque";break;
        case 3:cout<<"Sem piedade voce acerta um dano no monstro";break;
        case 4:cout<<"O monstro tenta defender, porem o seu ataque corta a defesa e causa dano ao monstro";break;
    }
    system("pause");
    system("cls");
}
void getHurt(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"Você ataca o monstro, porém ele o ataca de forma implacável e te causa danos";break;
        case 1:cout<<"Você erra o ataque e toma dano direto do monstro";break;
        case 2:cout<<"A criatura lhe ataca e suas defesas não são fortes o bastante para resistir ";break;
        case 3:cout<<"A criatura lhe acerta um golpe rápido e lhe machuca";break;
        case 4:cout<<"O monstro quebra a sua barreira e lhe machuca de forma sorrateira e ardilosa";break;
    }
    system("pause");
    system("cls");
}
void equalDamage(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 3;
    switch(randomNumber){
        case 0:cout<<"O monstro lhe ataca mais rapidamente, porém , você consegue se defender";break;
        case 1:cout<<"Ambos se atacam, porém a força de ambos os golpes é muito equivalente, e com isso ninguém sofre dano";break;
        case 2:cout<<"Você ataca a criatura, porém a defesa dela é intransigível  ";break;
    }
    system("pause");
    system("cls");
}

void death(){
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"Você tenta resistir à escuridão porém ela pe mais forte que a sua determinação";break;
        case 1:cout<<"Apesar de muita força de vontade, o monstro de dilacera com o golpe final";break;
        case 2:cout<<"Não longe de sua casa a morte que tentou sempre lhe buscar, enfim consegue";break;
        case 3:cout<<"A criatura mostra todo poder em um golpe certeiro no seu corção, o rancando e se deliciando deste artefato tão valoroso";break;
        case 4:cout<<"Sem piedade, a criatura acerta um golpe tão letal quanto a própria vida e tão ardiloso quanto a própria sombra";break;
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
        case 0:cout<<"A fera tenta resistir ao seu golpe, porém o seu poder e determinação são implacáveis";break;
        case 1:cout<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARG.... A fera cai ao chão sem vida";break;
        case 2:cout<<"Sem medo, você dá o golpe final na fera";break;
        case 3:cout<<"Você dá um golpe final tão letal quanto sua determinação";break;
        case 4:cout<<"Como a própria morte, você seifa a vida do monstro";break;
        system("pause");
        system("cls");
    }
}


#endif // FALAS_H_INCLUDED
