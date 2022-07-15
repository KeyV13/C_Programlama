/* 04prg01.c
   Sayısal değerleri ekrana yazdırmak için printf fonksiyonunun kullanımı */

#include <stdio.h>

main()
{

   int   a = 2,    b = 10,   c = 50;
   float f = 1.05, g = 25.5, h = -0.1, yuzde;

    printf("3 tamsayi       : %d %d %d\n", a, b, c);
    printf("3 tamsayi [TAB] : %d \t%d \t%d\n", a, b, c);

    printf("\n");

    printf("3 reel sayi (yanyana) : %f %f %f\n", f, g, h);
    printf("3 reel sayi (altalta) : \n%f\n%f\n%f\n\n", f, g, h);

    yuzde = 220 * 25/100.0;
    printf("220 nin %%25 i %f dir\n", yuzde);
    printf("%f/%f isleminin sonucu = %f\n", g, f, g / f);

    printf("\nprogram sonunda beep sesi cikar...\a");

    return 0;
}

/*
#   printf() Fonksiyonu

Standart C kütüphanesinde bulunan printf() fonksiyonu, değişkenlerin tuttuğu değerleri, 
onların adreslerini veya bir mesajı ekrana belli bir düzenle (format) standart çıkışa (stdout), 
yani ekrana, yazdırmak için kullanılan fonksiyondur. Daha önce yazılan örnek programlarda 
printf() fonksiyonundan yararlanmıştık. Şimdi bu fonksiyonun nasıl kullanıldığına bakalım.

Genel yazım biçimi:
      int printf(const char *format, ...);
Basit olarak ekrana Hata oluştu!.. şeklinde bir mesaj yazırma işlemi:

      printf("Hata Oluştu!..");
şeklindedir. 
Çoğu zaman ekrana, programda kullanılan bir değişkenin değeri yazdırılmak istenebilir. 
Örneğin ekrana bir tamsayı değişkeninin içeriğini basırımak için, printf()

      ....
      int x = 12;
      printf("x in değeri %d dir", x);
      ....
gibi kullanılır. Bu program parçasının ekran çıktısı şöyle olacaktır:
      x in değeri 12 dir
Bu örnekte printf fonksiyonuna iki parametre aktarılmıştır. Birincisi ekranda gösterilecek ve 
çift tırnaklar arasına yazılan ifadeler, ikincisi ise ekranda sayısal değeri gösterilmek istenen değişken (x).

*format üç kısımdan oluşmaktadır:

1. Düz metin (literal string): yazdırılmak istenen ileti.

Örneğin: printf("Ben gelmedim kavga için..."); gibi.

2. Konrol karakterleri (escape squence): değişkenlerin ve sabitlerin nasıl yazılacağını belirtmek veya 
imlecin alt satıra geçirilmesi gibi bazı işlemlerin gerçekleştirilmesi için kullanılır. Bu karakterler 
Tablo da listelenmiştir.

Örneğin: printf("\tDostun evi gönlüdür...\n"); gibi.

Tablo: Kontrol karakterleri
Karakter	Anlamı
  \a	    Ses üretir (alert)
  \b	    imleci bir sola kaydır (backspace)
  \f	    Sayfa atla. Bir sonraki sayfanın başına geç (formfeed)
  \n	    Bir alt satıra geç (newline)
  \r	    Satır başı yap (carriage return)
  \t	    Yatay TAB (horizontal TAB)
  \v	    Dikey TAB (vertical TAB)
  \"	    Çift tırnak karakterini ekrana yaz
  \'	    Tek tırnak karakterini ekrana yaz
  \\	    \ karakterini ekrana yaz
  %%	    % karakterini ekrana yaz

3. Tip belirleyici (conversion specifier): % işareti ile başlar ve bir veya iki karakterden oluşur (%d gibi). 
Ekrana yazdırılmak istenen değişkenin tipi, % işaretinden sonra belirtilir 

Örneğin: printf("x in değeri %d dir"); gibi.

Tablo : Tip karakterleri

Tip Karakteri	    Anlamı	                   Yazdırılacak veri tipi
    %c	        tek bir karakter	             char
    %s	        karakter dizisi (string)	     char
    %d	        işaretli ondalık tamsayı	     int, short
    %ld	        uzun işaretli ondalık tamsayı	 long
    %u	        işaretsiz ondalık tamsayı	     unsigned int, unsigned short
    %lu	        işaretsiz uzun tamsayı	         unsigned long
    %f	        Gerçel sayı	                     float
    %lf	        Çift duayarlı gerçel sayı	     double

Tip karakterlerini kullanarak, birden çok veri tipi yazdırılabilir. Örneğin:

      ...
      int    not= 12;
      float  pi = 3.14;
      char   kr = 'A';

      printf(" not = %d , pi = %f ve kr = %c dir", not, pi, kr);
      ...
gibi.
printf() fonksiyonu esnektir. Parametreler herhangi bir C deyimi olabilir. 
Örneğin x ve y nin toplamı şöyle yazılabilir:

      printf("%d", x+y);

*/