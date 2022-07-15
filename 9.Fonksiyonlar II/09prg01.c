/* Bu kısımda, esnek argümanlı fonksiyonlar, main() fonksiyonu ve komut satırından main() fonksiyonuna 
parametre aktarımı incelenektir.

Esnek argümanlar için iki temel kural vardır:
>> Esnek argümanlar kullanımı isteğe bağlıdır.
>> Esnek argümanları oluşturan küme ardışık olarak listeye eklenmelidir.

Bu türden argümanlar, aşağıdaki gibi, fonksiyonun parametre listesi kısmında ... ile belirtilir.
      double p(double x, int n, ...)
      {

      }
Esnek Argumanlı Fonksiyon tanımlaması yapabilmek için stdarg.h kütüphanesinde üç tane makro fonksiyon 
tanımlanmıştır. Bu fonksiyonlar Tablo 9.1'de listelenmiştir.

Tablo 9.1: stdarg.h'te tanımlı tip ve makro fonksiyonlar

Tip / Fonksiyon	                     Açıklama

va_list	                  Ardışık esnek argümalar için tip belirleyici
va_start(ap, n)	v         a_list tipinde bildirilmiş ap göstericisi için bellekten n elemanlı yer ayırır.
va_arg(ap, tip)	          Veri tipi tip ile belirlenmiş küme elemanlarına eriştirir.
va_end(ap)	              va_list tipinde bildirilmiş ap göstericisi için bellekten bölgeyi boşaltır.
*/

/* 09prg01.c: Polinom hesabı */

#include <stdarg.h>
#include <stdio.h>
#include <math.h>

/* fonksiyon örneği */
double p(double, int, ...);


int main(void){

double x = 1.7;

   printf("x = %lf icin:\n",x);

   printf("p(x, 1,  1.0) = %lf\n", 
           p(x, 1,  1.0));

   printf("p(x, 2,  1.0, -2.0) = %lf\n", 
           p(x, 2,  1.0, -2.0));

   printf("p(x, 3,  1.0, -2.0, 0.2) = %lf\n", 
           p(x, 3,  1.0, -2.0, 0.2));

   printf("p(x, 4,  1.0, -2.0, 0.2, 1.1) = %lf\n", 
           p(x, 4,  1.0, -2.0, 0.2, 1.1));

   printf("p(x, 5,  1.0, -2.0, 0.2, 1.1, -0.6) = %lf\n", 
           p(x, 5,  1.0, -2.0, 0.2, 1.1, -0.6));

  return 0;
}

/* Verilen x, n ve ai katsayıları için, 
   P(x,n) = a0 + a1*x + a2*x^2 + ... + an*x^n polinomu hesaplar. 
   a0, a1, ..., an katsayları esnek arguman olarak bildirilmiştir. */
double p(double x, int n, ...)
{
   double a, t = 0.0;
   int i;

   /* arguman göstericisi; ag va_list tipinde */
   va_list  ag;

   /* ag için bellekten n adet hücre ayır */
   va_start(ag, n);

   for(i=0; i<n; i++)
   {
      /* herbir argumanı sırasıyla al */
      a = va_arg(ag, double);

      /* polinomun değerini hesapla */
      t += a*pow(x,i);
   }

   /* belleği boşalt */
   va_end(ag);

   return t;
}