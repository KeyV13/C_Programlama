/*  #     Karakter Dizileri (Strings)

C dilinde, karakter dizileri oldukça sık kullanılır. Sadece karakter dizilerine özel olarak, karakter dizilerinin 
sonuna sonlandırcı karakter olarak adlandırılan bir simge eklenir. Sonlandırcı karakter, işlemlerin hızlı ve etkin 
bir biçimde yapılabilmesine olanak sağlar.

Sonlandırıcı karakter:
dizinin bittiği yeri gösterir,
ASCII tablosunun sıfır numaralı ('\0') karakteridir.
Karakter dizilerine iki şekilde başlangıç değeri verilebilir.

      char s[7] = {'d','e','n','e','m','e','\0'};
yada
      char s[7] = "deneme";

Birinci tanımlamada sonlandırıcı karakter programcı tarafından konmalıdır. Ikinci tanımlamada ise buna gerek yoktur.
Çünkü, sonlandırıcı karakter bu atamayla, derleyici tarafından eklenir.

 NOT
char s[7] = "deneme";

ataması geçeli olmasına rağmen, aşağıdaki atama geçersizdir:

char s[7];
char s = "deneme";

Karakter dizileri gets() fonksiyonu ile klavyeden okunabilir.
     char ad[20];
     ...
     gets(ad);

*/

/* 10prg06.c: Bir karakter dizisinin uzunluğunu bulur */

#include <stdio.h>

int main(void)
{
   char s[40];
   int  k = 0;

   /* diziyi oku */
   printf("Bir seyler yazin : ");
   gets(s);

   /* sonlandırıcı karaktere kadar karakterleri say */
   while( s[k]!='\0' )
      k++;
 
   printf("Dizinin uzunlugu : %d\n",k);

 return 0;
}