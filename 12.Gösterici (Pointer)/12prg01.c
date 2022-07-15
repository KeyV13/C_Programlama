/*       #    Polinter (Gösterici) Nedir?

Gösterici, bellek alanındaki bir gözün adresinin saklandığı değişkendir. 
Göstericilere veriler (yani değişkenlerin içeriği) değil de, o verilerin bellekte saklı olduğu 
hücrenin başlangıç adresleri atanır. Kısaca gösterici adres tutan bir değişkendir.

Bir gösterici, diğer değişkenler gibi, sayısal bir değişkendir. Bu sebeple kullanılmadan önce program içinde 
bildirilmelidir. Gösterici tipindeki değişkenler şöyle tanımlanır:

          tip_adı *gösterici_adı;
Burada tip_adı herhangi bir C tip adı olabilir. Değişkenin önünedeki * karakteri yönlendirme (indirection) operatörü
olarak adlandırılır ve bu değişkenin veri değil bir adres bilgisi tutacağını işaret eder. Örneğin:

          char  *kr;             // tek bir karakter için
          int   *x;              // bir tamsayı için
          float *deger, sonuc;   // deger gösterici tipinde, sonuc sıradan bir gerçel değişkenler

Yukarıda bildirilen göstericilerden; kr bir karakterin, x bir tamsayının ve deger bir gerçel sayının 
bellekte saklı olduğu yerlerin adreslerini tutar.  */

/* 12prg01.c: Bir değişkenin içeriğini ve adresini ekrana yazdırma */

#include <stdio.h>

int main()
{
   int *ptam, tam = 33;

   ptam = &tam;

   printf("tam:  icerik = %d\n", tam);
   printf("tam:   adres = %p\n",&tam);
   printf("tam:   adres = %p\n",ptam);

 return 0;
}