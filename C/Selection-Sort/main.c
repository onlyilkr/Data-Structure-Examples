#include "stdio.h"
#include "string.h"

//Sýralama algoritmalarýndan Selection Sort uygulamasý

void selectionSort (int dizi[], int elemanSayisi)
{
     int i, j, minIndex, temp;
     for (i=0; i<elemanSayisi-1; i++)
     {
         minIndex = i;						 // i.elemaný en küçük olarak seçiyoruz.
         for (j=i+1; j<elemanSayisi; j++)
         {
             if (dizi[j] < dizi [minIndex])  //Bu en küçük elemaný diðer elemanlar ile karþýlaþtýrýyoruz.
             minIndex = j;					//Koþulun saðlanmasý durumunda ek küçük elemanýn j. sýradaki eleman olur.
         }
         
		 temp = dizi[i];					//Deðiþtirme iþlemi gerçekleþtirilir
         dizi[i] = dizi[minIndex];
         dizi[minIndex] = temp;
     }
}

void main(){
	int dizi[] = {14,33,27,10,35,19,42,44,-3};
	int i,elemanSayisi = 9;
											//Yazdýrma Ýþlemi(Sýralamdan Önce)
	for (i=0;i<elemanSayisi;i++){
		printf("%d, ",dizi[i]);
	}
	
	selectionSort(dizi,elemanSayisi);
	printf("\nSiralamadan Sonra\n");
											//Yazdýrma iþlemi(Sýralamadan Sonra)
	for (i=0;i<elemanSayisi;i++){
		printf("%d, ",dizi[i]);
	}
}

