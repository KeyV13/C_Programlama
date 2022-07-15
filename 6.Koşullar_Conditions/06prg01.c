/* 06prg01.c
   Klavyeden girilen bir sayının çift olup olmadığını sınar. */

#include <stdio.h>

int main()
{
      int sayi;

      printf("Bir sayi girin: ");
      scanf("%d",&sayi);


      if (sayi % 2 == 0)
          printf("sayi cifttir.\n");
      else
          printf("sayi tektir.\n");

  return 0;
}

/*
Program içerisinde bazen iki veya daha fazla değerin karşılaştırılması gerekebilir. Bunun için, bütün programlama
dillerinde karşılaştırma deyimleri mevcuttur. C dili, if, switch ve ? olmak üzere üç tip karşılaştırma işlemi 
yapmaya izin verir. Ancak ? bir operatördür. if karşılaştırma deyimi ile, diğer programlama dilinde olduğu gibi 
if-else yapısı da kurulabilir. switch deyimi, bir değişkenin içeriğine göre program akışını yönlendirir.
*/
/*
6.1   Karşılaştırma Operatörleri ve Mantıksal Operatörler

Tablo 6.1'de listelenen Karşılaştırma Operatörleri, sayısal değerleri veya karakterleri mukayese etmek için 
kullanılır.

Tablo 6.1: Karşılaştırma Operatörleri

Operatör	Açıklama	    Örnek	   Anlamı

   >	    büyüktür	    x > y	   x, y den büyük mü?
   <	    küçüktür	    x < y	   x, y den küçük mü?
   ==	    eşittir	        x == y	   x, y ye eşit mi?
   >=	    büyük-eşittir	x >= y	   x, y den büyük yada eşit mi?
   <=	    küçük-eşittir	x <= y	   x, y den küçük yada eşit mi?
   !=	    eşit değil	    x != y	   x, y den farklı mı?

Birden çok karşılaştırma işlemi, Tablo 6.2'deki Mantıksal Operatörler'le birleştirilebilir.

Tablo 6.2: Mantıksal Operatörler

Operatör	Açıklama	      Örnek	              Anlamı

  &&	   mantıksal VE	      x>2 && x<y	   x, 2 den büyük VE y den küçük mü?
  ||	   mantıksal VEYA	  x>2 || x<y	   x, 2 den büyük VEYA y den küçük mü?
  !	       mantıksal DEGIL	  !(x>2)	       x, 2 den büyük değilse

  C dilinde, bir mantıksal işlemin sonucu tamsayı 0 (sıfır) veya başka bir değer olur. 
  0 olumsuz 0'dan farklı değerler olumlu olarak yorumlanır. Buna göre, aşağıdaki program parçasının

      ...
      int x = 1, y = 2, s, u, z;

      s = 2 > 1;
      u = x > 3;
      z = x <= y && y >0;

      printf("%d\t%d\t%d", s, u, z);
      ...
çıktısı:
      1       0       1
şeklinde olur. Bunun nedeni:
2 her zaman 1 den büyük olduğu için s değişkenine 1,
x = 1 < 3 olduğu için x değişkenine 0,
z = x <= y && y >0; eşitliğin sağtarafının sonucu olumlu olduğu için z değişkenine 1 atanır.

*/
/*
if, if-else Yapısı

Bu deyimler, koşullu işlem yapan deyimlerdir. if ve else tek bir karşılaştırma deyimi olup else kullanımı 
isteğe bağlıdır. Eğer bu koşul olumlu ise if den sonraki bölüm yürütülür ve else den sonraki bölüm atlanır. 
Koşul olumsuz ise if den sonraki küme atlanır ve eğer varsa, else den sonraki kümedeki işlemler gerçekleştirilir.

if deyiminin yapının genel biçimi şöyledir:
     if(koşul)
     {
       ...                     
        deyimler; (küme)
       ...                    
     }
if deyimi kullanılırken kümenin başlangıcı ve bitişini gösteren, küme parantezleri kullanılmasında kullanıcıya 
bir esneklik sunulmuştur. Eğer if deyiminden sonra icra edilecek deyimler tek satırdan oluşuyorsa, bu işaretlerin
kullanılması zorunlu değildir. Yani, if deyimden sonra { ve } işaretleri kullanılmamışsa, bu deyimi takip eden 
sadece ilk satır işleme konur. Bu durum, else if, else deyimlerinde ve daha sonra işlenecek for ve while gibi 
döngü deyimlerinde de geçerlidir.

Buna göre aşağıdaki kullanım

      if(x == y){
        puts("x ve y esit");
      }
ile
      if(x == y)
        puts("x ve y esit");
eşdeğerdir.
if deyiminin else ile birlikte kullanımı şu şekildedir:

      if(koşul){
        ...
        deyimler; (küme1)     
        ...
      }
   
      else{
        ...
        deyimler; (küme2)
        ... 
      }
Bu yapının kullanılmasına dair bir örnek Program 6.1'de gösterilmiştir. Program, klavyeden girilen bir tamsayının
çift olup olmadığını sınar. Bilindiği gibi, çift sayılar, 2 ile kalansız bölünebilen sayılardır.
*/