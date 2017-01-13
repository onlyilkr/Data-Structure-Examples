#include <iostream> 
#include <cmath> 
using namespace std; 
int uzunluk (int sayi) {
	return floor (log10(abs(sayi)))+1;
	}
void BasamaklarinaAyir(int sayi){
for (int i=uzunluk(sayi)-1;i>=0;i--){
		int dgr =sayi/pow(10,i); 
		cout<<dgr%10<<endl;
	}
}

int main(){	
	int sayi;
	cout<<"Sayi:";
	cin>>sayi; 
	BasamaklarinaAyir(sayi);
	return 0;
}

