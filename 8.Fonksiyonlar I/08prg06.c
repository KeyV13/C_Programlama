/*
#    Makro Fonksiyon Tanımlaması

Başlık dosyalarında, bol miktarda makro fonksiyon uygulamalarına rastlanır. 
Makro tanımlaması #define önişlemci komutu kullanılarak yapılır. Örneğin aşağıdaki makro fonksiyonlar geçerlidir.

    #define kare(x) (x)*(x)
    #define delta(a,b,c) ((b)*(b)-4*(a)(c))
    #define yaz() puts("Devam etmek için bir tuşa basın...")

Bu şekilde tanımlanan fonksiyonların kullanımı diğerleri gibidir. Yalnızca programın başında tanımlanır. 
Ancak, bu tanımlamalarla fonksiyon bellekte bir yer işgal etmez
*/

/* 08prg06.c: makro fonksiyon uygulaması */

#include <stdio.h>

#define buyuk(a,b) ( (a>b) ? a:b)

int main()
{
  int x,y,eb;

  printf("iki sayı girin: ");
  scanf("%d,%d",&x,&y);

  eb = buyuk(x,y);

  printf("buyuk olan  %d\n",eb);

 return 0;
}