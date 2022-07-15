/* 08prg03.c: Basit bankamatik simulasyonu.
   İstenen para miktarını 20, 10 ve 5'lik birimlere böler
   ve sonucu ekrana gösterir. */

/*  
#    void Fonksiyonlar
Bir fonksiyonun her zaman geri dönüş değerinin olması gerekmez. Bu durumda return deyimi kullanılmayabilir. 
Eğer bu anahtar kelime yoksa, fonksiyon ana bloğu bitince kendiliğinden sonlanır. 
Böyle fonksiyonların tipi void (boş, hükümsüz) olarak belirtilmelidir. Bu tip fonksiyonlar 
başka bir yerde kullanılırken, herhangi bir değişkene atanması söz konusu değildir, 
çünkü geri dönüş değeri yoktur. Ancak, void fonksiyonlara parametre aktarımı yapmak mümkündür.
*/

#include <stdio.h>

void bankamatik(int para)
{
  int a,yirmilik,onluk,beslik;

  a = para;

  if(a%5==0)
  {
       yirmilik = a/20;
       a -= yirmilik*20;

       onluk = a/10;
       a -= onluk*10; 

       beslik = a/5;
       a -= beslik*5;

       printf("\nYirmilik = %d",yirmilik);
       printf("\nOnluk    = %d",onluk);
       printf("\nBeslik   = %d\n",beslik);
    }
    else
       printf("Girilen miktar 5 ₺ ve katlari olmali!\a\n");

      /* return deyimi yok !*/
}

int main()
{
   int miktar;

   printf("Cekilecek para miktari (₺) = ");
   scanf("%d",&miktar);

   bankamatik(miktar);  /* fonksiyon bir değişkene atanmamış ! */

  return 0;
}