/* 04prg04.c: Formatlı çıktı */

#include <stdio.h>

main()
{
   float  x = 7324.25, y = 244.531;
   int    i = 1299;
   char  *c = "Merhaba C";

   printf("%10d\n"  ,i);
   printf("%10s\n"  ,c);

   printf("%10.5f\n",x);
   printf("%10.1f\n",y);

  return 0;
}

/*
    puts() Fonksiyonu

Ekrana yazdırılacak ifade bir karakter topluluğu ise, printf()'e alternatif olarak puts() fonksiyonu 
kullanılabilir. Ancak puts(), ekrana bu karakter topluluğu yazdıktan sonra, imleci alt satıra geçirir. 
Buna göre:

     printf("Sevgi varlığın mayasıdır.\n");
ile
     puts("Sevgi varlığın mayasıdır.");
kullanımları eşdeğerdir.
puts() fonksiyonu Tablo 4.1 de verilen kontrol karakterleri ile kullanılabilir.

     puts("Bu birinci satır...\nBu ikinci satır.");
     Bu birinci satır...
     Bu ikinci satır.

   gets() Fonksiyonu

Klavyeden bir karakter topluluğu okumak için kullanılır. Okuma işlemi yeni satır karakteriyle(\n) 
karşılasılıncaya kadar sürer. puts() - gets() arsındaki ilişki, printf() - scanf() arasındaki gibidir. Yani,

     scanf("%s",str);
ile
     gets(str);
aynı anlamdadır. puts() - gets() fonksiyonlarının kullanımı daha sonra ayrıntılı işlenecektir.


   getchar() Fonksiyonu

Bu fonksiyon ile standart girişten bir karakter okunur. Programı istenen bir yerde dudurup, bir karakater 
girinceye kadar bekletir. Örneğin:

     ...
     for(i=0; i<10; i++)
     {
        getchar();
        printf("%d\n",i);
     }
     ...
Yukarıdaki program parçası 0-9 arası sayıları sırasıyla ekranda göstermek için kullanılır. Fakat her rakamı 
yazdırılmadan önce klavyeden herhangi bir karakter girip [Enter] tuşuna basılması beklenir. Bu bekleme 
getchar() fonksiyonu ile gerçekleştirilir.


   Formatlı Çıktı

Bundan önceki programlardaki değişkenler serbest biçimde (free format), yani derleyicinin belirlediği 
biçimde ekrana yazdırılmıştı. Bazen giriş ve çıkışın biçimi kullanıcı tarafından belirlenmesi gerekebilir. 
Bu işlem:

Tamsayılarda %d yerine %wd
Gerçel sayılarda %f yerine %w.kf
Stringlerde %s yerine %ws
biçimindeki kullanım ile sağlanır. Burada w yazılacak olan sayının alan genişliği olarak adlandırılır. 
Gerçel bir değişken ekrana yazılacaksa, değişkenin virgülden sonra kaç basamağının yazdırılacağı 
k sayısı ile belirlenir. Ancak w > k + 2 olmalıdır.

     int i=583,j=1453;

     printf("%d %d\n",i,j);    // serbest biçim 
     printf("%5d %8d\n",i,j);  // formatlı 

program parçasının ekran çıktısı şöyledir:
ÇIKTI

583 1453
  583     1453

Birinci satır serbest formatta ikinci satır ise formatlı yazılmıştır. i değişkeninin tuttuğu 
583 sayısı %5d formatıyla yazdırılınca, bu sayı için 5 alan genişliği tanımlanır arakasından sağdan 
başlayarak sayı bu alana yazılır. Benzer olarak j değişkeni, 8 alan genişlikli bir bölgeye yazılır.

Gerçel sayılarda iş biraz daha karışık. Örneğin:
     int x=123.456;

     printf("%f\n",x);     // serbest biçim 
     printf("%8.2f\n",x);  // formatlı

program parçası çalıştırıldığında aşağıdaki sonuç gözlenir:
ÇIKTI

123.456001
  123.46

Birinci satır serbest formatta ikinci satır ise formatlı yazılmıştır. İkinci satırda x değişkeni için 
ayrılan alan genişliği 8 ve noktadan sonra 2 basamağa kadar hassasiyet önemsenmiştir. Dikkat edilirse 
noktadan sonra sayı uygun bir şekilde yuvarlanmış ve sayı sağa dayalı olarak yazılmıştır.

Son olarak formatlı çıktı ile ilgili bir örnek Program 4.4'de verilmiştir. İnceleyiniz.

*/