/* 03prg02.c
   sizeof operatörünün değişik nesnelerle kullanımı */

#include <stdio.h>

int main(){

   int    i;              /* bir tamsayı */
   int    dizi[5];        /* 5 elemanlı bir tamsayı dizi */

   double d;              /* bir gercel sayı */
   double mizan[6];       /* 6 elemanlı bir gercel dizi */

   char   c;              /* tek bir karakter */
   char   str[] = "masa"; /* bir karakter topluluğu */ 


   printf("sizeof(int)   = %d\n",sizeof(int));
   printf("sizeof(i)     = %d\n",sizeof(i));
   printf("sizeof(dizi)  = %d\n\n",sizeof(dizi));

   printf("sizeof(double)= %d\n",sizeof(double));
   printf("sizeof(d)     = %d\n",sizeof(d));
   printf("sizeof(mizan) = %d\n\n",sizeof(mizan));

   printf("sizeof(char)  = %d\n",sizeof(char));
   printf("sizeof(c)     = %d\n",sizeof(c));
   printf("sizeof(str)   = %d\n",sizeof(str));

return 0;
}


/*
çıktı:
sizeof(int)   = 4
sizeof(i)     = 4
sizeof(dizi)  = 20

sizeof(double)= 8
sizeof(d)     = 8
sizeof(mizan) = 48

sizeof(char)  = 1
sizeof(c)     = 1
sizeof(str)   = 5

Programda sizeof(int) değeri ile sizeof(i) değerinin aynı olduğu görülür. dizinin boyutu 5 olduğu için, 
sizeof(dizi) = sizeof(int)*5 = 20 şeklinde hesaplanmaktadır. Diğerleri için benzer durum söz konusu. 
Ancak, str 4 elemanlı bir dizi olduğu halde sizeof(str) = 5 dir. Neden? Bunu ilerideki bölümlerde öğreneceğiz.
*/