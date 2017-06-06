#include <iostream>
#include <string>
//Recursive olarak ifadenin uzunluðunu hesaplayan uygulama
using namespace std;

int Uzunluk (string yazi){
	if (yazi[0]=='\0') return 0;
	return 1+Uzunluk(yazi.substr(1)); 
	}
int main() {
	cout<<Uzunluk("Ahmet");
	return 0;
}

