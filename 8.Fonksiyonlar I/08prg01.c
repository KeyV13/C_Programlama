/* 08prg01.c: iki sayıyı toplar ve sonucu ekranda gösterir */

#include <stdio.h>
 int topla(int, int);  /*** fonksiyon prototipi ***/

int main()
{
    int toplam,a,b;

    printf("Iki sayi girin : ");
    scanf("%d %d",&a,&b);

   /*  fonksiyon çağırılıp, a ve b değerleri parametre olarak aktarılıyor.
       topla(a,b) = a + b değeri toplam değişkenine atanması */
    toplam = topla(a,b);
 
    printf("%d ve %d nin toplami  %d dir.\n", a,b,toplam);

  return 0;
}
/*** fonksiyon tanımlanması ***/

/* Bu fonksiyon iki tamsayıyı toplar */
int topla( int x, int y )
{
    int sonuc;
    sonuc = x + y;
    return sonuc;
}

/*
#    Fonksiyon Kavramı

Fonksiyon, belirli sayıda verileri kullanarak bunları işleyen ve bir sonuç üreten komut grubudur. 
Her fonksiyonun bir adı ve fonksiyona gelen değerleri gösteren parametreleri (bağımsız değişkenleri) vardır.

Fonksiyonların girdilerine parametre denir. Bir fonksiyon bu parametreleri alıp bir işleme tabi tutar 
ve bir değer hesaplar. Bu değer, çıktı veya geri dönüş değeri (return value) olarak adlandırılır. Unutmayın ki, 
bir fonksiyonun kaç girişi olursa olsun sadece bir çıkışı vardır.

C Programlama Dili, kullanıcısına bu türden fonksiyon yazmasına izin verir. C dilinde hazırlanan bir fonksiyonun 
genel yapısı şöyledir:

      FonksiyonTipi FonksiyonAdı(parametre listesi)
      parametrelerin tip bildirimleri
      {
        Yerel değişkenlerin bildirimi
        ...
        fonksiyon içindeki deyimler veya diğer fonksiyonlar
        ...
        return geri dönüş değeri;
      }

#     Parametre ve Argüman Kavramı

Fonksiyon bildiriminde, fonksiyona girdi olarak, kullanılan değişkenlere parametre denir.
Argüman ise fonksiyon çağrılırken gönderilen değere(lere) verilen addır.
Buna göre

    // Fonksiyon bildiriliyor ...
    int topla(int x, int y)  // Burada x ve y parametre
    {
       return (x+y);
    }
    .
    .
    // Fonksiyon çağrılıyor ...
    t = topla(9, 6);     // Burada 9 ve 6 argüman 
    .
    .

    #    Fonksiyon Bildirimi

Bir fonksiyonun bildirimi iki türlü yapılır:

Ana programdan önce:
...
int topla(int x,int y)      // fonksiyon 
{
  ...
}
...
main()
{
  ...
}


Ana programdan sonra: Bu durumda fonksiyon örneği (function prototype) ana programdan önce bildirilmelidir.
...
int topla(int x, int y);  // fonksiyon örneği
...
main()
{
  ...
}
...
int topla(int x, int y)      //fonksiyon
{
  ...
}

Bir C programı içinde, yazmış olduğunuz fonksiyonlar genellikle bu iki tipte kullanılır. 
İkinci kullanımda fonksiyon prototipi mutlaka bildirilmelidir. Aksi halde bir hata mesajı ile karşılaşılır. 
Fonksiyon prototipinde parametre isimlerinin yazılması zorunlu değildir. Sadece tiplerini belirtmek de yeterlidir.
Yukarıdaki topla fonksiyona ait prototip:

     int topla(int x, int y);
şekinde yazılabileği gibi
     int topla(int, int);
şeklinde de yazılabilir.

Buraya kadar anlatılanlar Program 8.1 üzeride özetlenmiştir.

*/