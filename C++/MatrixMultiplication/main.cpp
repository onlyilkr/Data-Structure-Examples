#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 2 //Birinci matrisin satir sayisi
#define N 3 //Birinci matrisin sütun ve ikinci matrisin satyr sayisi
#define P 2 //Ikinci matrisin sütun sayisi
int main() {
	int a[10][10],b[10][10],c[10][10]={},i,j,k; 
		
	printf ("Birinci Matris:\n\n"); 
		for(i=0;i<M;i++) { 
			for(j=0;j<N;j++){ 
				printf( "a[%d][%d]:",i+1,j+1);
				scanf ("%d",&a[i][j]);
			}
	}	
	printf("\n olusan matris: \n");
	
	for(i=0;i<M;i++){
		for (j=0;j<N;j++){			
			printf("%5d",a[i][j]);
		}	
	printf("\n\n");	
	}
	
	
	
	printf ("Ikinci Matris:\n\n"); 
		for(j=0;j<N;j++){
			for(k=0;k<P;k++){ 
			printf( "b[%d][%d]:",j+1,k+1);
			scanf ("%d",&b[j][k]);
			}
	}	
	
	printf("\n olusan b matris: \n"); 
	for(j=0; j<N;j++) {
		for (k=0;k<P;k++){
			printf("%5d",b[j][k]);
		}
		
	printf("\n\n");
	}	
	
	//Carpim
	for (i=0;i<M;i++){
		for(j=0;j<P;j++){
			for(k=0;k<N;k++)	c[i][j]+=a[i][k]*b[k][j];
	}
	printf("\n");
	}	
	printf("Sonuc Matrisi:\n");
		for(i=0;i<M;i++){
			for (k=0;k<P;k++){		
				printf("\t%d",c[i][k]);
			}	
	puts("");
	}
}
