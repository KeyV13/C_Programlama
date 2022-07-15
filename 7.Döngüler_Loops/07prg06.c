/*
#    break Deyimi

Bir C programında, bir işlem gerçekleştirilirken, işlemin sona erdirilmesi bu deyim ile yapılır. 
Örneğin, döngü deyimleri içindekiler yürütülürken, çevrimin, koşuldan bağımsız kesin olarak sonlanması 
gerektiğinde bu deyim kullanılır
*/
/* 07prg06.c: n>=0 olduğu sürece n! değerini hesaplar */

#include <stdio.h>

int main()
{
   long int i,n,faktor;

   while(1) /* sonsuz döngü */
   {
       printf("Faktoriyeli hesaplanacak sayi girin : ");
       scanf("%ld",&n);

       if(n<0) break; /* döngüyü sonlandır */

       for(faktor=1, i=1; i<=n; i++)
          faktor *= i;

       printf("%ld! = %ld\n",n,faktor);
   }

 return 0;
}