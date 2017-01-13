#include <conio.h>
 #include <stdio.h>
 //Kullanýcýdan alýnan karakterin ASCII karþýlýðýný veren uygulama
 int main() { 
 char karakter; 

 printf("Karakteri giriniz: "); 
 scanf("%c", &karakter); 
 
 printf("ASCII karsiligi: %d ", karakter);
 getch();
 }

