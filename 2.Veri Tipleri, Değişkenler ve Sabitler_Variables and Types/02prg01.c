/* 02prg01.c : sizeof operatörünün kullanımı */ 
// Değişken tipleri ve türevlerinin bellekte kapladıkları alanlar

#include <stdio.h>

main()
{
  printf( "char           : %d bayt\n", sizeof(char));
  printf( "short          : %d bayt\n", sizeof(short));
  printf( "int            : %d bayt\n", sizeof(int));
  printf( "long           : %d bayt\n", sizeof(long));
  printf( "unsigned char  : %d bayt\n", sizeof(unsigned char));
  printf( "unsigned short : %d bayt\n", sizeof(unsigned short));
  printf( "unsigned int   : %d bayt\n", sizeof(unsigned int));
  printf( "unsigned long  : %d bayt\n", sizeof(unsigned long));
  printf( "float          : %d bayt\n", sizeof(float));
  printf( "double         : %d bayt\n", sizeof(double));
  printf( "long double    : %d bayt\n", sizeof(long double));
}

/* Veri Tipleri

Veri tipi (data type) program içinde kullanılacak değişken, sabit, 
fonksiyon isimleri gibi tanımlayıcıların tipini, yani bellekte ayrılacak bölgenin büyüklüğünü, 
belirlemek için kullanılır. Bir programcı, bir programlama dilinde ilk olarak öğrenmesi gereken, 
o dile ait veri tipleridir. Çünkü bu, programcının kullanacağı değişkenlerin ve 
sabitlerin sınırlarını belirler. C programlama dilinde dört tane temel veri tipi bulunmaktadır. Bunlar:

      char
      int
      float
      double
Fakat bazı özel niteleyiciler vardır ki bunlar yukarıdaki temel tiplerin önüne gelerek 
onların türevlerini oluşturur. Bunlar:
      short
      long
      unsigned
Bu niteleyiciler sayesinde değişkenin bellekte kaplayacağı alan isteğe göre değiştirilebilir. 
Kısa (short), uzun (long), ve normal (int) tamsayı arasında yalnızca uzunluk farkı vardır. 
Eğer normal tamsayı 32 bit (4 bayt) ise uzun tamsayı 64 bit (8 bayt) uzunluğunda ve 
kısa tamsayı 16 biti (2 bayt) geçmeyecek uzunluktadır. İşaretsiz (unsigned) ön eki kullanıldığı taktirde, 
veri tipi ile saklanacak değerin sıfır ve sıfırdan büyük olması sağlanır. İşaretli ve işaretsiz verilerin 
bellekteki uzunlukları aynıdır. Fakat, işaretsiz tipindeki verilerin üst limiti, işaretlinin iki katıdır.

NOT:
Kısa ve uzun tamsayı tutacak tanımlayıcılar için int anahtar kelimesinin yazılmasına gerek yoktur.

     short s;  // short int s; anlamında
     long k;   // long int k;  anlamında

Bir C programı içerisinde, veri tiplerinin bellekte kapladığı alan sizeof operatörü ile öğrenilebilir. 
İlgi cekici olan, bu alanların derleyiciye ve işletim sistemine bağlı olarak değişiklik göstermesidir. 
Program 2.1'de, sizeof operatörü kullanılarak, veri tiplerinin bellek uzunlularının nasıl ekrana yazdırılacağı
gösterilmiştir. Programın çıktısı, farklı derleyiciler ve işletim sisteminde denendiğinde bu durum daha iyi 
anlaşılır.

*/