#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    char letra;
    cout<<"digite uma letra";
    cin>>letra;
    if(letra == ("a"||"e"||"i"||"o"||"u")){
    	cout<<"é uma vogal";
	}else{
		cout<<"não é uma vogal";
	};
    
}