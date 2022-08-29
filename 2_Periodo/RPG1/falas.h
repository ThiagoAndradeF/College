//Falas de combate
void hurtMonster(){
    int randomNumber;
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"Você ataca o monstro e feri a criatura";break;
        case 1:cout<<"O monstro tenta desviar porém a sua determinação é mais forte";break;
        case 2:cout<<"AAAARG... O monstro aguniza de dor após o seu poderoso ataque";break;
        case 3:cout<<"Sem piedade você acerta um dano no monstro";break;
        case 4:cout<<"O monstro tenta defender, porém o seu ataque corta a defesa e causa dano ao monstro";break;
    }
}
void getHurt(){
    int randomNumber;
    randomNumber = rand() % 5;
    switch(randomNumber){
        case 0:cout<<"Você ataca o monstro, porém ele o ataca de forma implacável e te causa danos";break;
        case 1:cout<<"Você erra o ataque e toma dano direto do monstro";break;
        case 2:cout<<"A criatura lhe ataca e suas defesas não são fortes o bastante para resistir ";break;
        case 3:cout<<"A criatura lhe acerta um golpe rápido e lhe machuca";break;
        case 4:cout<<"O monstro quebra a sua barreira e lhe machuca de forma sorrateira e ardilosa";break;
    }
}
void equalDamage(){
    int randomNumber;
    randomNumber = rand() % 3;
    switch(randomNumber){
        case 0:cout<<"O monstro lhe ataca mais rapidamente, porém , você consegue se defender";break;
        case 1:cout<<"Ambos se atacam, porém a força de ambos os golpes é muito equivalente, e com isso ninguém sofre dano";break;
        case 2:cout<<"Você ataca a criatura, porém a defesa dela é intransigível  ";break;
    }   
}