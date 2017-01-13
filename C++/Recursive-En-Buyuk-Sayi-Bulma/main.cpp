#include <iostream>

//Recursive olarak bir dizideki en buyuk elemanýný bulma

using namespace std;
int EnBuyuk(int dizi[],int uzunluk,int max=0){
	if(uzunluk ==0)return max; 
	if(max<dizi[uzunluk-1]) max=dizi[uzunluk-1];
	return EnBuyuk(dizi,uzunluk-1,max);
}
int main() {	
int dizi[8]={5,9,4,7,8,3,-3,13};
cout<<"En buyuk eleman:"<<EnBuyuk(dizi,8);
}

