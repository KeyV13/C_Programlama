/* 07prg02.c: do-while yapısı */

#include <stdio.h>

main()
{
   int sayi;

   do
   {
      printf("Bir sayi girin : ");
      scanf("%d",&sayi);
      printf("iki kati       : %d\n",2*sayi);

   }while( sayi>0 );   /* koşul */

   puts("Döngü sona erdi.");

 return 0;
}

/*
#        do ... while Döngüsü

Bu deyimin while deyiminden farkı, koşulun döngü sonunda sınanmasıdır. Yani koşul sınanmadan döngüye girilir 
ve döngü kümesi en az bir kez yürütülür. Koşul olumsuz ise döngüden sonraki satıra geçilir. Bu deyimin kullanımı 
Program 7.2 de gösterilmiştir. Genel yazım biçimi:

      do{
         ...
         döngüdeki deyimler;
         ...
      }while(koşul);
*/