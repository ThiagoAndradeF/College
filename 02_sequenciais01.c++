#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    a=19;
    a=a%4;
    a=pow(a,3);
    cout <<a;
    a=a/a;
    a=a-a;
    return 0;
}
/*
8=0,9=1,10=8,11=27,12=0
*/