/* 02prg02.c : Değişkenler ve sabitlerin ekrana yazdırılması */

#include <stdio.h>

#define PI 3.141593

int main()
{
  const int MAX = 100;
  char   c = 'a';
  char  *s = "Bu bir sicim";
  int    i = 22;
  float  f = 33.3;
  double d = 44.4;
 
  printf("PI = %lf\n",PI);
  printf("MAX= %d\n", MAX);
  printf("c  = %c\n", c);
  printf("s  = %s\n", s);
  printf("i  = %d\n", i);
  printf("f  = %f\n", f);
  printf("d  = %lf\n",d);

 return 0;
}

/*
#   Değişkenler

Değişkenler bilgisayarın geçici belleğinde bilginin saklandığı gözlere verilen sembolik adlardır. 
Bir C programında, bir değişken tanımlandığında bu değişken için bellekte bir yer ayrılır. Her değişkenin 
tuttuğu değerin nasıl bir veri olduğunu gösteren (önceki bölümde anlatılan) bir veri tipi vardır [1], [3].

C programlama dilinde, değişkenler ve sabitler programın başında bulunmalıdır. Bazı uygulamalarda değişkenin 
bir başlangıç değerinin olması istenir. Böyle durumlarda değişken bildirilirken başlangıç değeri verilebilir.
Örneğin:

      char isim='X', z;    // değer atamak zorunlu değil
      int  sayi=0, n;
      float toplam=0.0, sonuc=22.14;

Değişken isimleri verirken bazı kurallara uymak zorunludur. Bunlar:

Değişken adları en fazla 32 karakterden oluşabilir. 32 karakterden uzun değişken adları ilk 32 karakteri 
değerlendirilir. Geriye kalan karakterler işleme tabi tutulmaz.
Değişken adları ingiliz alfabesinde bulunan karakterler (A-Z) veya (a-z) yada rakamlar (0-9) ile yazılmalıdır.
Türkçe karakterler, özel karakter veya boşluk karakteri kullanılamaz.
Değişken adları herhangi bir rakam ile başlayamaz. Ilk karakter bir harf olamalıdır. 
Sonrakiler rakamlardan oluşabilir.
Aşağıda verilen kelimeler ANSI C 'nin anahtar kelimeleridir (key words) ve değişken ismi olarak kullanılamaz.

   auto       double   int        struct 
   break      else     long       switch
   case       enum     register   typedef
   char       extern   return     union
   const      float    short      unsigned
   continue   for      signed     void
   default    goto     sizeof     volatile
   do         if       static     while

Bu kurallara göre aşağadaki değişken (sabit, fonksiyon) adlarının geçerliliğini inceleyiniz.

Değişken/Sabit/Fonksiyon/Yapı Adı	  Geçerlilik	  Açıklama
asal	                               geçerli	  -
Momentum	                           geçerli	  -
ivme	                               geçerli	  -
olasilik	                           geçerli	  -
IsikHizi	                           geçerli	  -
isik_hizi	                           geçerli	  Alt çizgi karakteri   '_'   kullanılabilir
isik hizi	                           geçersiz	  Boşluk karakteri kullanılamaz
ışık_hızı	                           geçersiz	  Türkçe karakter kullanılamaz
1Bit	                               geçersiz	  rakam ile başlanamaz
typedef	                               geçersiz	  Anahtar kelimelerden birisi kullanılamaz

#  Sabitler

Sabit bildirimi, başlangıç değeri verilen değişken bildirimi gibi yapılır. Ancak, 
veri tipinin önüne const anahtar sözcüğü konmalıdır. Örneğin:

      const float   PI = 3.142857;
      const double  NOT= 12345.8596235489;
      const int     EOF= -1;
      const char[] = "devam etmek için bir tuşa basın...";

gibi sabit bildirimleri geçerli olup bunların içerikleri program boyunca değiştirilemez. 
Yalnızca kullanılabilir. Genellikle, sabit olarak bildirilen değişken isimleri büyük harflerle, 
diğer değişken isimlerinin ise küçük harflerle yazılması (gösterilmesi) C programcıları tarafından 
geleneksel hale gelmiştir.

Birçok C programında sabitler #define önişlemci komutu ile de tanımlandığını görebilirsiniz. 
Bu komutla sabit bildirimi, bir program parçasına ve makro fonksiyon tanımlaması yapılabilir. 
Bir program geliştirilirken simgesel sabitlerin kullanılması programın okunurluğunu arttırır ve 
bazen gerekli de olabilir. Aşağıda verilen simgesel sabit bildirimleri geçerlidir. 
#define önişlemcisi ile makro fonksiyon tanımalama işlemi, Bölüm 8 ve Bölüm 20'de anlatılacaktır.

  #define MAX     100
  #define DATA    0x0378
  #define YARICAP 14.22

#  Rakamsal Bilgiler

C programlama dili içinde tanımlanabilecek sabit rakamlar rakamsal bilgi (literal) olarak adlandırılır. 
Her veri tipi kendi rakamsal bilgisine sahiptir. Bu bilgiler, kaynak kod içerisinde, özel değerleri ifade eder. 
Örneğin aşağıdaki atama işleminde 25 ve 17.2 sayıları gibi:

   i = 25;    // 25, int tipinde bir rakamsal bilgidir 
   r = 17.2;  // 17.2, double tipinde bir rakamsal bilgidir
C dilinde bütün tamsayı sabitler varsayılan (default) olarak int tipinde, gerçel sayı sabitler varsayılan 
olarak double tipindedir. Ancak sabitleri gösteren rakamların sonuna eklenecek U (veya u), L (veya l) ve 
F (veya f) harfleri ile bu durum değiştirilebilir. Bu yüzden, aşağıdaki atamalar aynı anlamda değildir.

    i = 25;    // int           rakam 
    i = 25U;   // unsigned int  rakam 
    i = 25L;   // long int      rakam 
    i = 25UL;  // unsigned long rakam 
    i = 25L;   // long int      rakam 

    r = 17.2;  // double        rakam 
    r = 17.2L; // long double   rakam 
    r = 17.2F; // float         rakam 
Tamsayı (int) rakamsal bilgiler, 8 (oktal) ve 16 (hexadesimal) sayı tabanında da gösterilebilir. 
Bunun için sabit rakamın başına, 8 tabanı için 0 (sıfır) ve 16 tabanını için 0x sembolleri eklenir. 
16'lık sistemdeki hafler büyük (A, B, C, D, E ve F) veya küçük (a, b, c ,d, e ve f) olabilir. 
Buna gösterime göre, aşağıdaki atmalar aynı anlamadadır:

    i = 75;    // i = 75, 10 tabanında 
    i = 0113;  // i = 75,  8 tabanında 
    i = 0x4b;  // i = 75, 16 tabanında 
    i = 0x4B;  // i = 75, 16 tabanında 
Gerçel sayılar ondalıklı veya üstel olmak üzere iki biçimde gösterilebilir. Örneğin 123.456 sayısının 
aynı anlama gelen dört farklı gösterimi aşağıda verilmiştir. Üstel gösterimde, 1.23456e+2 veya 1.23456E+2 
sayısı matematikteki 1.23456 x 102 gösterimi ile eşdeğerdir.

    x = 123.456;      // ondalıklı gösterimi 
    x = 123.456e+0;   // üstel gösterim 
    x = 1.23456e+2;   // üstel gösterim 
    x = 1234.56E-1;   // üstel gösterim 
Karakter sabitler, bir harf için tek tırnak, birden çok karakter için çift tırnak içinde belirtilirler.

    'A'               // bir karakter
    "Merhaba Dunya"   // bir karakter kümesi

#  Değişken Bildirim Yerleri ve Türleri

## Yerel (local) Bildirim

Yerel değişkenler kullanıldığı fonksiyon içerisinde bildirilir. Yalnızca bildirildiği fonksiyon içerisinde 
tanınır ve kullanılabilir.

    int topla(int a,int b)
    {
    // yerel (local) değişken c nin bildirimi 
     int c;
     c = a + b;
     return c;
   }
## Genel (general) Bildirim

Genel değişkenler bütün fonksiyonların dışında bildirilir. Bir değişken program boyunca sürekli olarak 
kullanılıyorsa genel olarak bildirilmelidir.

   #include <stdio.h>

   void karesi();

   //  m ve n global tip değişkendir. 
   //  Bu iki değişken tüm program boyunca kullanılmaktadır.

   int m,n;  

   main()
   {
     m=7;
     karesi();
     printf("%d nin karesi %d dir",m,n);
   }

   void karesi(){
     n = m*m;
   }

#  Tip Dönüşümleri

Bir formül içerisinde bir çok değişken veya sabit olabilir. Bu değişken ve sabitler birbirinden farklı tipte 
olursa, hesap sonucunun hangi tipte olacağı önemlidir. Bir bağıntıda, içeriği dönüşüme uğrayan değişkenler 
eski içeriklerini korurlar. Dönüştürme işlemi için geçiçi bellek alanı kullanılır; dönüştürülen değer 
kullanıldıktan sonra o alan serbest bırakılır.

    char kr;
    int tam;
    long int ltam;
    unsigned int utam;
    short int stam;
    float f;
    double d;
bildirimlerine göre:

    Bağıntı      Sonuç Tipi
    -------      ----------
    kr+5         int
    kr+5.0       double
    d+tam        double
    f+d-2        double
    utam-tam     unsigned
    ltam*tam     long
    tam/2        int
    tam/2.0      double
NOT
Tamsayılar arası bölme kesme hatalarına (truncation error) neden olur.
Bunun anlamı iki tamsayının oranı yine bir tamsayıdır.
örneğin: 4/2=2; ama 3/2=1 (1.5 değil).

Bir değişkenin sabit değerin veya bağıntının önüne tür veya takı (cast) yazılarak sonucun hangi tip çıkması 
istendiği söylenebilir. Genel yazım biçimi:

      (tür tipi)  bağıntı;
Örneğin:
      int x=9;
      float a,b,c;
      double d;
      ...
      a = x/4;
      b = x/4.0;
      c = (float) x/4;
işleminin sonucunda a değişkenine 2.0, b ve c değişkenlerine 2.25 değeri aktarılır. 
Yani 9/4 ile 9/4.0 farklı anlamdadır.

*/