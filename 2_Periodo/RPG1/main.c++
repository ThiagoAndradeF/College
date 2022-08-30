#include <iostream>
#include <locale.h>
#include <fstream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    ifstream meu_arquivo;

    meu_arquivo.open("fala.txt");

    char lido;
    lido = meu_arquivo.get();

    meu_arquivo.close();
    


    return 0;
}