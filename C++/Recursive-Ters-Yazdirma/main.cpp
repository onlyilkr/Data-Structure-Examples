#include <iostream>
#include <string>

//Bir ifadenin tersini özyinelemeli olarak döndüren fonksiyon

using namespace std;

string TersCevir(string yazi){
	if(yazi.size() == 0) return yazi;
	return TersCevir(yazi.substr(1))+yazi.at(0); 
	}

int main() {
	cout<<TersCevir("www.ilkerguldali.com"); // ters çevrilecek stringleri verdik 
	return 0;
}

