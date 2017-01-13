#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <sstream>
//Alaca�� ikilik ve onalt�l�k tabandaki say�y� onluk tabana �evirip toplamalar�n� yazd�ran fonk.
using namespace std;
int IkilikDonusum(string ikiliSayi) { 
	int deger=0; 
	int uzunluk= ikiliSayi.size(); 
	int ikiliUzunluk=uzunluk;
		
	for (int i=0;i<uzunluk;i++){
		deger = (atoi(ikiliSayi.substr(i,1).c_str())*pow(static_cast<double>(2),--ikiliUzunluk))+deger;
	}
	
	return deger;
	}

int OnAltilikDonusum(string onaltiliSayi){ 
	int tmp; 
	int deger;
	stringstream ss; 
	ss<<hex<< onaltiliSayi; 
	ss>>tmp; 
	deger= reinterpret_cast<int&>(tmp);
	
	return deger;
	
}

int Topla(string ikiliSayi,string onaltiliSayi){
	return IkilikDonusum(ikiliSayi) + OnAltilikDonusum(onaltiliSayi);
	}
	
int main(){	
	cout<<Topla("1000","FF");
	return 0;
}

