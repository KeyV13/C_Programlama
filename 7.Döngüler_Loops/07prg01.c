/* 07prg01.c: while döngüsü */

#include <stdio.h>

main()
{
   int x=0;

   while(x <= 10)
      printf("%d\n",x++);

 return 0;
}

/*
Döngü (loop) deyimleri, bir kümenin belli bir koşul altında tekrar edilmesi için kullanılır. 
C programlama dilinde, while, do...while ve for olmak üzere üç tip döngü deyimi vardır. 
Diğer programlama dillerinde olduğu gibi, bu deyimlerle istenildiği kadar iç-içe döngü yapısı kullanılabilir.
*/
/*
#  while Döngüsü

Tekrarlama deyimidir. Bir küme ya da deyim while kullanılarak bir çok kez yinelenebilir. 
Yinelenmesi için koşul sınaması döngüye girilmeden yapılır. Koşul olumlu olduğu sürece çevrim yinelenir. 
Bu deyimin kullanımı Program 7.1 de gösterilmiştir. Genel yazım biçimi:

      while(koşul)
      {
       ...
        döngüdeki deyimler; [küme]
       ...
      }
*/