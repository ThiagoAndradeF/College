/*Diz-se que uma sequência de n elementos é balanceada, com n par, se as seguintes somas são iguais:

• a soma do maior elemento com o menor;

• a soma do segundo maior elemento com o segundo menor;

• a soma do terceiro maior elemento com o terceiro menor.

ex: 2 12 3 6 16 15 é uma sequência balanceada, pois 16+2=15+3=12+6 Dados n (n par) e uma sequência de n elementos, verificar se essa sequência é balanceada. Crie um vetor de 10 elementos e informe se o mesmo é balanceado ou não.*/
#include <iostream>
using namespace std;

int main(){
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int maxiumValue, minimumValue, previusMinimumValue, previusMaximumValue;
	for (int i = 0; i < 10; i++) {
		array[i]==rand()%15+1;
			maxiumValue = array[i];
		}
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			maxiumValue = array[i];
		}

		if (array[i] > maxiumValue) {
			previusMaximumValue = maxiumValue;
			maxiumValue = array[i];
		}
	}

	return 0;
}