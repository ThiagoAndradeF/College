#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a1,b,c,delta,x1,x2,x;
	cout<<"levando em conta a fórmula reduzida:AX2+BX+C\n digite o valor de\n A\n    B\n    C\n";
	cin>>a1>>b>>c;
	delta=(pow(b,2)-(4*a1*c));
	cout<<"valor de delta\n";
	x=2*a1;
	x1= (b*(-1)+sqrt(delta))/x;
	x2= (b*(-1)-sqrt(delta))/x;
	cout<<"valor de x1\n"<<x1<<"\n";
	cout<<"valor de x2\n"<<x2<<"\n";
    return 0;
}