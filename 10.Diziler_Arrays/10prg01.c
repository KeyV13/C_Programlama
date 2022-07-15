/* #    Diziler
Dizi, aynı tipteki verilere tek bir isimle erişmek için kullanılan bir kümedir. Bu küme matematikteki 
küme kavramından biraz farklıdır. Bir dizi bildirildikten sonra, dizinin bütün elemanları bellekte peşpeşe saklanır. 
Bu yüzden dizilere tek bir isim altında çok sayıda değişken içeren bellek bölgesi de denir. Buna göre, bir diziyi 
dizi yapan iki temel özellik vardır:

>> dizi elemanların bellekte (program çalıştığı sürece) sürekli biçimde bulunması
>> dizi elemanların aynı türden değişkenler olması

##   Dizilerin Bildirimi

Bir dizi çok sayıda değişken barındırdığından, bunları birbirinden ayırdetmek için indis adı verilen bir bilgiye 
ihtiyaç vardır. C Programlama Dili'nde, bir dizi hangi tipte tanımlanmış olursa olsun başlangıç indisi 
her zaman 0'dır.

Bir dizinin bildirim işleminin genel biçimi söyledir:

        veriTipi dizi_adı[eleman_sayısı];

Örneğin, 5 elemanlı, kütle verilerini bellekte tutmak için, kutle dizisi şöyle tanımlanabilir:

      float kutle[5];

Bu dizinin elemanlarına bir değer atama işlemi şöyle yapılabilir:

      kutle[0] = 8.471
      kutle[1] = 3.683
      kutle[2] = 9.107
      kutle[3] = 4.739
      kutle[4] = 3.918
 NOT
1. elemanın indisi 0,
5. elemanın indisinin 4 olduğuna dikkat edin.

Bildirim sırasında dizilerin eleman sayısı tamsayı türünden bir sabit ifadesiyle belirtilmesi zorunludur. Örneğin:

      int n = 100;
      int a[n];

şeklindeki tanımlama, dizi uzunluğunun değişken (n) ile belirtilmesi nedeniyle geçersizdir. Bunun yerine, 
dizilerin eleman sayısı aşağıdaki gibi sembolik sabitlerle belirtmek mümkündür.

     #define  n  100
     ...
     int a[n];

Bir dizinin bellekte kapladığı alanın bayt cinsinden karşılığı sizeof operatörü ile öğrenilebilir.

     int   a[5], b, c;
     ...
     b = sizeof(a);                // bellekte kapladığı alan: b = 4*5  = 20 bayt
     c = sizeof(a) / sizeof(int);  // Dizinin boyutu         : c = 20/4 = 5

##   Dizilere Başlangıç Değeri Verme

Bir diziye başlangıç değerleri aşağıdaki gibi kısa formda atanabilir:

     float  kutle[5]= { 8.471, 3.683, 9.107, 4.739, 3.918 };
     int    maliyet[3] = { 25, 72, 94 };
     double a[4] = { 10.0, 5.2, 7.5, 0.0};

Küme parantezlerinin sonlandırıcı ; karakteri ile bittiğine dikkat ediniz.

Bir dizinin uzunluğu belirtilmeden de başlangıç değeri atamak mümkündür.

     int   a[] = { 100, 200, 300, 400 };
     float v[] = { 9.8, 11.0, 7.5, 0.0, 12.5};

Derleyici bu şekilde bir atama ile karşılaştığında, küme parantezi içindeki eleman sayısını hesaplar ve dizinin 
o uzunlukta açıldığını varsayar. Yukarıdaki örnekte, a dizisinin 4, v dizisinin 5 elemanlı olduğu varsayılır.


##   Dizileri Yazdırma/Okuma

printf ve scanf fonksiyonları bir dizinin okunması ve yazdırılması için de kullanılır. Örneğin bir A dizisinin 
aşağıdaki gibi bildirildiğini varsayalım:

      int A[10];

Bu dizinin elemanlarını klavyeden okumak için:

      for(i=0; i<10; i++)
         scanf("%d",&A[i]);

daha sonra bu değerlerini ekrana yazmak için:

      for(i=0;i<10;i++)
         printf("%d\n",A[i]);

*/

/* 10prg01.c: 10 tamsayının aritmetik ortalamasını hesaplar */

#include <stdio.h>

#define N 10

int main()
{
   int   i;
   float x[N], ort, toplam = 0.0;

   for(i=0; i<N; i++)
   {
      /* i. eleman okunuyor ... */
      printf("%d. sayi : ",i+1);
      scanf("%f",&x[i]);  

      toplam += x[i];
   }

   ort = toplam/N;

   printf("Sayilarin ortalamasi = %f\n",ort);

 return 0;
}