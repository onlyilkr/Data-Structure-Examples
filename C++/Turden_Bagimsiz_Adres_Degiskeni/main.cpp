#include <iostream>
using namespace std;
template <typename Nesne>

void AdresDegistir(Nesne* &p1,Nesne* &p2){
	Nesne* pt =p1; 
	p1=p2; 
	p2=pt;
}
int main() {
	
	int *p1,*p2,x,y;
	x=10; 
	y=12;
	
	p1=&x; 
	p2=&y; 
	
	cout<<"p1="<<*p1<<endl; 
	cout<<"p2="<<*p2<<endl; 
	
	AdresDegistir(p1,p2); 
	cout<<"p1="<<*p1<<endl; 
	cout<<"p2="<<*p2<<endl;
	
	return 0;
}

