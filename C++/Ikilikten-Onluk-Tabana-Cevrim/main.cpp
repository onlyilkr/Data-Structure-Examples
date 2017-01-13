#include<iostream>
#include<cmath>

//Ýkilik tabanda girilen bir sayiyi onluk tabana çevirme
using namespace std;
int twoToTen(int sayi) {
                                
	int d=0,r,c=0,p; 
	
		while(sayi>0) {
		r = sayi%10;
		cout<<"r="<<r<<endl;
		
		sayi = sayi/10;
		cout<<"sayi="<<sayi<<endl;
		p = pow(2,c); 
		
		cout<<"c="<<c<<endl;
		cout<<"p="<<p<<endl;
		d = d + (r*p);  
		c++;
		}
	cout<<"Girilen sayinin onluk tabandaki karsiligi = "<<d;
	}    
int main(){
	int x;
	cout<<"Ikilik tabanda bir sayi giriniz:";
	cin>>x;
	twoToTen(x);   
} 
