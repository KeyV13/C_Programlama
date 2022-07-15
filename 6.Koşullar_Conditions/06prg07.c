/* 06prg07.c: ? ve if-else yapısının kullanımı */

#include <stdio.h>

int main(void)
{
    float x, y, z;

    printf("x : "); scanf("%f",&x);
    printf("y : "); scanf("%f",&y);

      if(y)                        /* y, 0'dan farklı mı? */
        z = ( y > x ) ? x/y : x*y; /* y>x ise z = x/y, değilse z = x*y  */
      else
        z = 0.0;

    printf("z = %f\n",z);

 return 0;
}

/*
#          ? Karşılaştırma Operatörü

Bu operatör, if-else karşılaştırma deyiminin yaptığı işi sınırlı olarak yapan bir operatördür. 
Genel yazım biçimi:

      (koşul) ? deyim1 : deyim2;
İlk önce koşul sınanır. Eğer koşul olumluysa deyim1 aksi takdirde deyim2 değerlendirilir. 
deyim1 ve deyim2 de atama işlemi yapılamaz. Ancak koşul deyiminde atama işlemi yapılabilir. 
deyim1 ve deyim2 yerine fonksiyon da kullanılabilir. Aşağıda bu deyimin kullanımına ait örnekler verilmiştir.

      x = ( a > b ) ? a : b;
Yukarıdaki ifadede koşul a'nın b'den büyük olmasıdır. Eğer olumluysa x adlı değişkene a, değilse b değeri atanır.
Bu şekilde kullanım if-else yapısı ile kurulmak istenirse:

      if( a > b )  x = a;
      else         x = b;
şeklinde olacaktır. Program 6.7 ? karşılaştırma operatörünün basit bir kullanımını göstermektedir.

12. satırdaki if deyimindeki koşul biraz farklıdır. Genel olarak koşul bu şekilde bildirilirse, 
koşulun 0 dan farklı olup olmadığı sınanır. Yani:

      if(y)
ile
      if( y != 0 )
aynı anlamdadır.
Bu kullanım çok yagındır. Eğer y, 0 dan farklı ise koşul olumlu olarak değerlendirilecektir. 
13. satırda ? ile bir sınama yapılmaktadır. Eğer y, x den büyük ise z değişkenine x/y, aksi takdirde x*y değeri 
atanmaktadır. Eğer y = 0 ise z değişkenine 0 değeri atanmaktadır.

*/