#include <iostream>

using namespace std;

void heapify(int dizi[],int n,int i){

	int enBuyuk = i;
	int sol = 2*i+1;
	int sag = 2*i+2;
	
	if(sol<n && dizi[sol] > dizi[enBuyuk])
		enBuyuk=sol;
	if(sag<n && dizi[sag] > dizi[enBuyuk])
		enBuyuk=sag;
	
	if(enBuyuk!=i){
		swap(dizi[i],dizi[enBuyuk]);
		heapify(dizi,n,enBuyuk);
	}
}

void heapSort(int dizi[], int n){
	for(int i=n/2 -1; i>=0; i--)
		heapify(dizi,n,i);
		
	
	for(int i=n-1; i>=0; i--){
		swap(dizi[0],dizi[i]);
		heapify(dizi,i,0);
	}
}

void bastir(int dizi[],int n){
	for (int i=0; i<n; i++)
		cout<< dizi[i]<<" ";
	
}

int main(){
	int dizi[]= {60,80,50,40,30,20};
	int n= sizeof(dizi)/sizeof(dizi[0]);
	
	heapSort(dizi,n);
	
	cout<<"Siralanmis dizi\n";
	bastir(dizi,n);
}
