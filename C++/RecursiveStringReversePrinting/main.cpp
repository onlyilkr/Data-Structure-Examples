#include <iostream>
#include <string>

//Bir ifadenin tersini �zyinelemeli olarak d�nd�ren fonksiyon

using namespace std;

string TersCevir(string yazi){
	if(yazi.size() == 0) return yazi;
	return TersCevir(yazi.substr(1))+yazi.at(0); 
	}

int main() {
	cout<<TersCevir("www.ilkerguldali.com"); // ters �evrilecek stringleri verdik 
	return 0;
}

