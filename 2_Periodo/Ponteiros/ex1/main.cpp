#include <iostream>

using namespace std;
void mm(int v[10],int *min,int *max){
    for(int i=0; i<10; i++){
        v[i]=i;
    }
    *min = v[0];
    *max = v[9];
}
int main()
{
    int *v= (int*)malloc(sizeof(int*)*100);
    cout<<v;
}
