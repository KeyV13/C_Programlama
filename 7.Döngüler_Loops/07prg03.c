/*
#         for Döngüsü

Bu deyim, diğer döngü deyimleri gibi bir kümeyi bir çok kez tekrarlamak için kullanılır. 
Koşul sınaması while da olduğu gibi döngüye girmeden yapılır. Bu döngü deyimin içinde diğerlerinden 
farklı olarak başlangıç değeri ve döngü sayacına sahip olmasıdır. Bu deyimin kullanımı 
Program 7.3 de gösterilmiştir Genel yazım biçimi:

      for( başlangıç ; koşul ; artım )
      {
       ...
        döngüdeki deyimler;
       ...
      }
*/
/* 07prg03.c: for döngüsü ile faktoriyel hesabı. */

#include <stdio.h>

int main()
{
   long  i, n, faktor;

   printf("Faktoriyeli hesaplanacak sayi girin : ");
   scanf("%ld",&n);

   faktor=1;
   for(i=1; i<=n; i++){
         faktor *= i;     /* n! = 1 x 2 x 3 x ... x n */
   }

   printf("%ld! = %ld\n", n, faktor);

 return 0;
}