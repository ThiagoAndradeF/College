// Deduza a saída do código abaixo:
#include <iostream>

using namespace std;

template <typename T>

void fun(const T & x)

{

static int contador = 0;

cout << "x = " << x << " contador = " << contador << endl;

++contador; return;

}

int main() {

fun<int> (1); cout << endl; fun<int>(1); cout << endl;

fun<double>(1.1);

cout << endl;

return 0;

}