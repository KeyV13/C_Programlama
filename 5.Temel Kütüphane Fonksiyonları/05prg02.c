/* 05prg02.c
   0-100 arasında 10 tane rasgele sayı üretir */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int   i, ri;

   for(i=1; i<=10; i++)
   {
      ri = rand() % 100;             /* 0-100 arası tamsayı   */
      printf("\%d\t%d\n",i,ri);
   }
   puts("10 tane rasgele sayi uretildi.");

return 0;
}

/*
#    Standart Kütüphane Fonksiyonları (stdlib.h)

Standart kütüphanede, programı sonlandıran, dinamik bellek yönetiminde kullanılan veya rastgele sayı üretme vb. 
işlevleri yerine getiren bir çok fonksiyon mevcuttur. Bu kısımda, bunlardan bir kaçı Tablo 5.2'de listelenmiştir


Tablo 5.2: stdlib.h kütüphanesinde tanımlı bazı fonksiyonlar

Fonksiyon Bildirimi	             Açıklama	                                                          Örnek	              Sonuç

int atoi(const char *s);	Bir karakter topluluğunu tamsayıya çevirir	                            atoi("-12345")	     -12345
long atol(const char *s);	Bir karakter topluluğunu uzun tamsayıya çevirir	                        atol("1234567890")	 1234567890
double atof(const char *s);	Bir karakter topluluğunu gercel sayıya çevirir	                        atof("-123.546")	 -123.456
void exit(int durum);	    Programı sonlandırarak kontrolü işletim sistemine geri verir.	        exit(1)	-
int rand(void);	            0 ile RAND_MAX arasında rastgele sayı üretir.
                            RAND_MAX, stdlib.h içinde tanımlanmış bir sembolik sabittir	            rand()	              50485132
max(a,b)	                stdlib.h'de tanımlanmış iki sayıdan en büyüğünü bulan makro fonksiyon	max(5, 9)	          9
min(a,b)	                stdlib.h'de tanımlanmış iki sayıdan en küçüğünü bulan makro fonksiyon	min(5, 9)	          5
*/