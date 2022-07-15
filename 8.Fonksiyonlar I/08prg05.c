/*
#      Fonksiyon Parametreleri

Fonksiyon parametreleri klasik ve modern olmak üzere iki türlü tanımanabilir. Örneğin aşağıdaki fonksiyon 
kendisine parametre olarak gelen tamsayının faktoriyelini gönderir. Bu fonksiyonun parametresi (n):

    int faktoriyel(n)      // kalsik biçim
    int n
    {
       int  i=1, f=1;

       while(i<=n) f *= i++;

       return f;
    }
şeklinde yada:
    int faktoriyel(int n)   // modern biçim
    {
       int  i=1, f=1;

       while(i<=n) f *= i++;

       return f;
    }
şeklinde yazılabilir.

Bir fonksiyona parametre aktarım yapılması zorunlu değildir. Parametresiz bir fonksiyon da tanımlamak mümkündür. 
Bu durumda, parametre kısmı ya boş bırakılır yada bu kısma void yazılır. 
Örneğin standard C'de stdlib.h kütüphanesinde tanımlı rand fonksiyonu şöyle tanımlanmıştır:

    int rand(void);
Son olarak, ne parametresi ne de geri dönüş değerine olan bir fonksiyon şöyle tanımlanabilir:

    void mesaj_yaz()
    {
       printf("Hata olustu !..\n");
    }
yada
    void mesaj_yaz(void)
    {
       printf("Hata olustu !..\n");
    }

*/

// Fonksiyonların sadece ana program tarafından çağrılması zorunlu değildir. 
// Bir fonksiyon başka bir fonksiyon tarafından da çağrılabilir. Bu tür kullanıma dair bir örnek

/* 08prg05.c: Verilen bir tarihin yılın kaçıncı günü olduğunu hesaplar. */

#include <stdio.h>

int yilin_gunu(int, int, int);
int artik_yil(int);

int main(void)
{
  int gun = 1;     /* tarih: 01 Ağustos 2003 */
  int ay  = 8;
  int yil = 2003;

  printf("%02d %02d  %d yilinin\n",gun,ay,yil );
  printf("%d. gunudur\n",yilin_gunu(gun,ay,yil) );

  return 0;
}

/* yil artıl yıl ise 1 aksi halde 0 gönderir */
int artik_yil(int yil)
{
   if( yil%4==0 && yil%100!=0 || yil%400==0 ) return 1;
   else return 0;
}

/* yılın kaçıncı günü olduğunu hesaplar ve o günü gönderirir */
int yilin_gunu(int gun, int ay, int yil)
{
   int ygun = gun;

   switch(ay-1)
   {
     case 12: ygun += 31;
     case 11: ygun += 30;
     case 10: ygun += 31;
     case  9: ygun += 30;
     case  8: ygun += 31;
     case  7: ygun += 31;
     case  6: ygun += 30;
     case  5: ygun += 31;
     case  4: ygun += 30;
     case  3: ygun += 31;
     case  2: ygun += 28 + artik_yil(yil);  /* 28+1 veya 28+0 */
     case  1: ygun += 31;
   }

  return ygun;
}