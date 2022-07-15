/* 08prg02.c: Bir fonksiyonda iki return deyimi */

#include <stdio.h>

int artik_yil(int); /* fonksiyon prototipi */

void main()
{
  int yil;

  printf("Bir yil girin: ");
  scanf("%d",&yil);

  if( artik_yil(yil) ) 
      printf("%d artik yil\n",yil);
  else
      printf("%d artik yil degil\n",yil);
}

/* yil artıl yıl ise 1 aksi halde 0 gönderir */
int artik_yil(int yil)
{
  if(  yil % 4   == 0 &&
       yil % 100 != 0 ||
       yil % 400 == 0  ) return 1;
  else return 0;
}

/*

#   Geri Dönüş Değerleri

return anahtar sözcüğünün iki önemli işlevi vardır:

>> fonksiyonun geri dönüş değerini oluşturur
>> fonksiyonu sonlandırır
Bu deyiminden sonra bir değişken, işlem, sabit veya başka bir fonksiyon yazılabilir. Örneğin:

     return (a+b/c);         // parantez kullanmak zorunlu değil 
     return 10;              // değişken kullanmak mecbur değil 
     return topla(a,b)/2.0;  // önce topla fonksiyonu çalışır

Bir fonksiyonda birden çok geri dönüş değeri kullanılabilir. Fakat, ilk karşılaşılan return deyiminden sonra 
fonksiyon sonlananır ve çağrılan yere bu değer gönderilir. Örneğin aşağıdaki harf fonksiyonunda beş tane 
return deyimi kullanılmıştır.

     char harf(int not)
     {
        if( not>=0  && not<50 ) return 'F';
        if( not>=50 && not<70 ) return 'D';
        if( not>=70 && not<80 ) return 'C';
        if( not>=80 && not<90 ) return 'B';
        if( not>=90           ) return 'A';
     }
Bu fonksiyon kendisine parametre olarak gelen 0-100 arasındaki bir notun harf karşılığını gönderir. 
Aslında geri gönderilen değer bir tanedir. Eğer bu fonksiyon aşağıdaki gibi çağrılırsa:

     char harfim;
     ...
     harfim = harf(78);
     ...
harfim değişkenine 'C' değeri (karakteri) atanır.

*/