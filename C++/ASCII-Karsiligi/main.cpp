#include <conio.h>
 #include <stdio.h>
 //Kullan�c�dan al�nan karakterin ASCII kar��l���n� veren uygulama
 int main() { 
 char karakter; 

 printf("Karakteri giriniz: "); 
 scanf("%c", &karakter); 
 
 printf("ASCII karsiligi: %d ", karakter);
 getch();
 }

