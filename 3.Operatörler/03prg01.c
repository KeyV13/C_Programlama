/* 03prg01.c: Aritmetik ve atama operatorlerinin kullanimi */

#include <stdio.h>


main()
{
    int x, y;  /* yerel degikenlerin bildirimi */

    x = 1;   /*  x in baslangic degeri  */
    y = 3;   /*  y nin baslangic degeri */

    printf(" x = %d ve y = %d, olarak veriliyor.\n", x, y);

    x = x + y;
    printf("x <- x + y  atamsinin sonucunda x=%d dir\n", x);

    x = 1;  /* x e tekrar 1 degeri ataniyor */
    x += y;
    printf("x += y  atamasinin sonucunda x=%d dir\n", x);

 return 0;
}

/* 
# OPERATORLER
Operatörler, değişkenler veya sabitler üzerinde matematiksel ve karşılaştırma işlemlerini yapan simgelerdir. 
Yani bir operatör bir veya daha fazla nesne (değişken) üzerinde işlem yapan sembollerdir. 
Bu kısımda aritmetik operatörler, atama operatörleri ve sizeof operatörü anlatıcaktır. 
Karşılaştırma Operatörleri, Mantıksal Operatörler ve Bit Düzeyinde işlem yapan operatörler daha sonraki 
bölümlerde incelenektir.

## Aritmetik Operatörler
Değişken veya sabitler üzerinde temel aritmetik işlemleri gerçekleyen operatörlerdir. 
Bunlar Tablo da listelenmiştir.

Tablo: Aritmetik Operatörler
Operatör	Açıklama	Örnek	Anlamı
  +	        toplama	    x + y	x ve y nin toplamı
  -	        çıkarma	    x - y	x ve y nin farkı
  *	        carpma	    x * y	x ve y nin çarpımı
  /	        bölme	    x / y	x ve y nin oranı
  %	        artık bölme	x % y	x / y den kalan sayı
  
## Atama Operatörleri

Bu operatörler bir değişkene, bir sabit vaya bir aritmetik ifade atamak (eşitlemek) için kullanılır.
Birleşik atama: bazı ifadelerde işlem operatörü ile atama operatörü birlikte kullanılarak, ifadeler
daha kısa yazılabilir. Eğer ifade

          değişken = değişken [operatör] aritmetik ifade;
şeklinde ise, daha kısa bir biçimde

          değişken [operatör]= aritmetik ifade;
olarak yazılabilir. Bu operatörler Tablo da listelenmiştir.

Tablo: Atama Operatörleri
Operatör	Açıklama	            Örnek	        Anlamı
   =	    atama	                x = 7;	        x = 7;
   +=	    ekleyerek atama	        x += 3	        x = x + 3
   -=	    eksilterek atama	    x -= 5	        x = x - 5
   *=	    çarparak atama	        x *= 4	        x = x * 4
   /=	    bölerek atama	        x /= 2	        x = x / 2
   %=	    bölüp, kalanını atama	x %= 9	        x = x % 9
   ++	    bir arttırma	        x++ veya ++x	x = x + 1
  --	    bir azaltma	            x-- veya --x	x = x - 1

  Bu tanımlamalara göre, aşağıdaki atamaları inceleyiniz:

    // bir arttırma işlemleri 
     i++;
     ++i;
     i += 1;
     i = i + 1;


    // karmaşık atamalar 
     f *= i;      // f = f * i; anlamında
     f *= i+1;    // f = f * (i+1); anlamında
     z /= 1 + x;  // z = z / (1+x); anlamında
Bir arttırma veya eksiltme operatörlerini kullanırken dikkatli olunmalıdır. Çünkü aşağıdaki türden atamalar 
bazen karışıklığa neden olur.

     a = 5;    // a = 5
     b = a++;  // a = 6 ve b = 5
     c = ++a;  // a = 7 ve c = 7

## sizeof Operatörü
Veri tiplerinin, değişkenlerin ve dizilerin bellekte kapladığı alan sizeof operatörü ile öğrenilebilir. 
Genel kullanımı:

     sizeof(nesne)
şeklindedir. Program 3.2'de bu operatörün nasıl kullanıldığı gösterilmiştir. Ayrıca bkz: Program 2.1

*/