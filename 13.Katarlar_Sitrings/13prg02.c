/* 13prg02.c: Bir stringin içindeki 'm' karakterlerinin sayısı hesaplar */

#include <stdio.h>

int main()
{
   char str[20];
   int  i,sayac=0;

   printf("Bir string girin: ");
   gets(str);

   for(i=0; str[i] != '\0'; i++)
      if( str[i] == 'm') sayac++;

   printf("'m' karakteri sayisi = %d\n",sayac);

 return 0;
}
/* 13. satırdaki döngüde, str[i]!='\0', koşulu ile sonlandırıcı karaktere gelinip gelinmedği sorgulanmaktadır. 
14. satırda katar içindeki 'm' karakterine rastlanırsa sayac değeri bir artmaktadır. Katar sonuna kadar 
bütün 'm' karakterlerinin toplamı hesaplanıp ekrana yazdırılmıştır.
döngü şöyle de yazılabilirdi:

      ...
      for(i=0; str[i]; i++)
         if(str[i] == 'm') sayac++;
      ...
Buradaki işlemle str[i], NULL karakterinden farklı olduğu sürece döngü devam ettirilmiştir.*/