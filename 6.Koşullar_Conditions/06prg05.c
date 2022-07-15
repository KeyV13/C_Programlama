/* 06prg05.c: switch - case yapısı ve break kullanımı */

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
          break;
       case 'b':
          printf("b harfine bastiniz\n");
          break;
       default:
          printf("a veya b ye basmadiniz\n");
          break;
     }

return 0;
}
/*
Program 6.4'te case 'a': durumu için 16, 18 ve 20. satırlar da işleme konumuştu. Eğer klavyeden 'a' karakterini 
girip ekrana sadece a harfine bastiniz iletisi yazdırılmak isteniyorsa, 20. satıra break deyimi ilave edilmelidir. 
break deyiminin kullanımı Program 6.5'te gösterilmiştir.
*/