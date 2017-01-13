#include <iostream>
using namespace std;
unsigned int faktoriyel(unsigned int); 

unsigned int faktoriyel(unsigned int n){
	if(n>1)
		return n*faktoriyel(n-1);
	else
		return 1;
}

int main() {
	int n; 
	unsigned int sonuc; 
	cout<<"Faktoriyeli hesaplanacak sayi:"; 
	cin>>n;
	sonuc=faktoriyel(n);
	cout<<n<<" sayisinin faktoriyeli "<<sonuc<<"'dir"<< endl;

	return 0;
}


