#include <conio.h>
 #include <stdio.h>
 //Kullanıcıdan alınan karakterin ASCII karşılığını veren uygulama
 int main() { 
 char karakter; 

 printf("Karakteri giriniz: "); 
 scanf("%c", &karakter); 
 
 printf("ASCII karsiligi: %d ", karakter);
 getch();
 }

