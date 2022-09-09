#include <iostream>

using namespace std;

template <typename T>

T max(T x, T y)

{

return (x > y)? x : y;

}

int main() {

cout << max(3, 7) << endl;

cout << max(3.0, 7.0) << endl;

cout << max(3, 7.0) << endl;

return 0;

}
// Considerando o código acima:

// a) Corrija o erro produzido pelo terceiro cout sem alterar o conteúdo de main, para isto, altere a função parametrizada.

// b) Reescreva o código sem utilizar templates.