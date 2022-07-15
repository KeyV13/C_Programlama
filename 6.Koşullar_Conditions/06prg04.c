/* 06prg04.c: switch - case yapısının kullanımı */

#include <stdio.h>

int main(void)
{
    char kr;

    printf("Lutfen bir karakter girin\n");

    kr = getchar(); /* tek bir karakterin okunması */

    switch (kr)
    {
       case 'a':
          printf("a harfine bastiniz\n");
       case 'b':
          printf("b harfine bastiniz\n");
       default:
          printf("a veya b ye basmadiniz\n");
    }

return 0;
}

/*
#   switch - case Yapısı

Bu deyim bir değişkenin içeriğine bakarak, programın akışını bir çok seçenekten birine yönlendirir. 
case (durum) deyiminden sonra değişkenin durumu belirlenir ve takip eden gelen satırlar (deyimler) işleme konur. 
Bütün durumların aksi söz konu olduğunda gerçekleştirilmesi istenen deyimler default deyiminden sonraki kısımda 
bildirilir. Genel yazım biçimi:

      switch(değişken)
      {
           case sabit1:
              ...
              deyimler;
               ...
           case sabit2:
               ...
               deyimler;
               ...
           .
           .
           .
           case sabitn:
               ...
               deyimler;
               ...
           default:
               ...
               hata deyimleri veya varsayılan deyimler;
               ...
      }
Program Program 6.4'te switch deyiminin basit bir kullanımı gösterilmiştir
*/