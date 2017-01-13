#include "stdio.h"
#include "string.h"

//S�ralama algoritmalar�ndan Selection Sort uygulamas�

void selectionSort (int dizi[], int elemanSayisi)
{
     int i, j, minIndex, temp;
     for (i=0; i<elemanSayisi-1; i++)
     {
         minIndex = i;						 // i.eleman� en k���k olarak se�iyoruz.
         for (j=i+1; j<elemanSayisi; j++)
         {
             if (dizi[j] < dizi [minIndex])  //Bu en k���k eleman� di�er elemanlar ile kar��la�t�r�yoruz.
             minIndex = j;					//Ko�ulun sa�lanmas� durumunda ek k���k eleman�n j. s�radaki eleman olur.
         }
         
		 temp = dizi[i];					//De�i�tirme i�lemi ger�ekle�tirilir
         dizi[i] = dizi[minIndex];
         dizi[minIndex] = temp;
     }
}

void main(){
	int dizi[] = {14,33,27,10,35,19,42,44,-3};
	int i,elemanSayisi = 9;
											//Yazd�rma ��lemi(S�ralamdan �nce)
	for (i=0;i<elemanSayisi;i++){
		printf("%d, ",dizi[i]);
	}
	
	selectionSort(dizi,elemanSayisi);
	printf("\nSiralamadan Sonra\n");
											//Yazd�rma i�lemi(S�ralamadan Sonra)
	for (i=0;i<elemanSayisi;i++){
		printf("%d, ",dizi[i]);
	}
}

