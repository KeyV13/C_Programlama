/* Yapı, struct Deyimi (Structures)
Aralarında mantıksal bir ilişki bulunan farklı türden bilgiler "yapılar (structures)" içerisinde mantıksal 
bir bütün olarak ifade edilebilir. Yapılar diziler gibi bellekte sürekli kalır. Bir yapı içerisindeki elemanlara
üye (member) denir. Üyelerin herbiri farklı veri tipine sahip olabilir. Bu sayede, kendi tipinizi üretebilirsiniz.

Genel yapı bildirimi:

       struct yapı_adı{
          tip yapı_değişken_ismi;
	      tip yapı_değişken_ismi;
	     ...
       };
 NOT
enum ile sabit bildirimi yapılırken
struct ile değişken bildirimi yapılır. */

/* 15prg03.c 
   Bir öğrenciye ait bilgilerin struct deyimi ile bir çatı altında toplanması  */

#include <stdio.h>

/* kayit yapısı */
struct kayit{
    char ad[10];
    long no;
    int  sinif;
};

int main()
{
   struct kayit ogr;   /* ogr değişkeni kayit tipinde */

   printf("Ogrenci Nosu  : "); scanf("%ld",&ogr.no);
   printf("Ogrenci Adi   : "); scanf("%s" , ogr.ad);
   printf("Ogrenci Sinifi: "); scanf("%d" ,&ogr.sinif);

   printf("\n*** Girilen bilgiler ***");
   printf("\nNo    : %ld",ogr.no);
   printf("\nAdi   : %s ",ogr.ad);
   printf("\nSinifi: %d ",ogr.sinif);

 return 0;
}