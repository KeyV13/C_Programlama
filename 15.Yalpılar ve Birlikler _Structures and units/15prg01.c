/*     enum Deyimi Numaralandırma Sabitleri (Enumeration Constants)
Bu tip, değişkenin alabileceği değerlerin belli (sabit) olduğu durumlarda programı daha okunabilir hale getirmek 
için kullanılır. Genel yazım biçimi:

       enum tip_adı{değer_1, değer_2, ..., değer_n} değişken_adı;
tip_adı programcı tarafından verilen tip ismidir. değişken_adı ise program içinde kullanılacak olan 
değişkenin adıdır. Eğer kullanılmazsa program içinde daha sonra enum ile birlikte kullanılır. Örneğin:

       enum bolumler{programcilik, donanim, muhasebe, motor};
tanımı ile derleyici programcilik için 0, donanim için 1, muhasebe için 2 ve motor için 3 değerini kabul ederek 
atamaları buna göre yapar. Değişken adı bildirilirse daha sonra enum kullanmaya gerek kalmaz. Örneğin:

       enum renkler {kirmizi, mavi, sari} renk;
       enum gunler  {pazartesi, sali, carsamba, persembe, cuma, cumartesi, pazar};
gibi yapılan sabit tanımlamaları program içinde kullanılabilir:

       enum bolumler bolum;
       enum gunler gun;

       ...
       bolum = muhasebe; // bolum = 2 anlamında
       gun   = cuma;     // gun   = 4 anlamında
       renk  = kirmizi;  // renk  = 0 anlamında
*/
/* 15prg01.c: Klavyeden girilen bir sayının tek olup olmadığını sınar */

#include <stdio.h>

enum BOOLEAN{ FALSE, TRUE };  /* 0, 1 */

int tek(int n){ return (n % 2);  }

int main()
{
    enum BOOLEAN sonuc;
    int x;

    printf("Bir sayi girin: ");
    scanf("%d",&x);

    sonuc = tek(x);   /* tek mi? */

    if( sonuc == TRUE )
         puts("Girilen sayi tek ");
    else
         puts("Girilen sayi cift");

  return 0;
}