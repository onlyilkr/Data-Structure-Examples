#include <stdio.h>
	//Doðrusal Arama(Linear Search)
int main(){
	int dizi[100],ara,n,i;
	printf("Dizi kac elemanli olsun?\n");
	scanf("%d",&n);
	printf("Dizi elemanlarini giriniz\n");
	for(i=0; i<n; i++)
		scanf("%d",&dizi[i]);

	printf("Aramak istedigin eleman? ");
	scanf("%d",&ara);
	
	for(i=0; i<n; i++){
		if(dizi[i]==ara){
			printf("%d dizideki yeri:%d \n ",ara,i+1);
			break;
		}
	}
	if (i==n)
		printf("%d dizide yok\n",ara);
	
	return 0;
	
}
