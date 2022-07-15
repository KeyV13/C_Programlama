/* 07prg05.c: 
#             iç içe Geçmiş Döngüler

Bir program içinde birbiri içine geçmiş birden çok döngü de kullanılabilir. 
Bu durumda (bütün programlama dillerinde olduğu gibi) önce içteki döngü, daha sonra dıştaki döngü icra edilir.

   Üç basamaklı, basamaklarının küpleri toplamı kendisine eşit olan tam 
   sayılara  Armstrong sayı denir. Örneğin: 371 = 3^3 + 7^3 + 1^3.
   Bu program İç-içe geçmiş 3 döngü ile bütün Aramstrong sayıları bulur. */

#include <stdio.h>

int main()
{
   int a,b,c, kup, sayi, k=1;

   for(a=1; a<=9; a++)  
   for(b=0; b<=9; b++)
   for(c=0; c<=9; c++)
   {
       sayi = 100*a + 10*b + c;       /* sayi = abc (üç basamaklı) */
       kup  = a*a*a + b*b*b + c*c*c;  /* kup  = a^3+b^3+c^3        */

       if( sayi==kup ) printf("%d. %d\n",k++,sayi);
   }

return 0;
}

/*
#       Sonsuz Döngü

Bir döngü işlemini sonsuz kere tekrarlarsa bu döngü sonzuz döngü olarak adlandırılır. Böyle bir döngü için, 
koşul çok önemlidir. Örneğin while döngüsü için:

          ...
          while(1)
          {
             printf("Sonsuz döngü içindeyim...\n");
          }
          ...
yada
          ...
          while(7>3)
          {
             printf("Sonsuz döngü içindeyim...\n");
          }
          ...
Her iki durumda da çevrimler, sonsuz döngü durumundadır. Çünkü while(1) ve while(7>3) ifadelerdeki koşullar daima
olumludur. Bu durumda çevrim sonsuz döngüye girer.

for döngüsünde, başlangıç, koşul ve artım parametrelerinden herhangi birini kullanmak isteğe bağlıdır. Her hangi 
biri verilmediğinde döngünün nasıl davranacağı iyi yorumlanmalıdır. Örneğin for döngüsünün hiçbir parametresi 
verilmezse, döngü sonsuz çevrime girer. Yani:

          for(;;)
              printf("Sonsuz döngü içindeyim...\n");
gibi.
*/