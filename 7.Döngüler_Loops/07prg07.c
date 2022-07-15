/* 07prg07.c:
   x, y'den farklı olmak üzere |x|+|y|<=3 eşitsizliğini sağlayan 
   tamsayı çiftlerini ekrana yazar */

/*
  #     continue Deyimi
Bir döngü içerisinde continue deyimi ile karşılaşılırsa, ondan sonra gelen deyimler atlanır ve döngü 
bir sonraki çevrime girer.
*/

#include <stdio.h>

int main()
{
   int x,y,k=1;

   for (x=-3;x<=3;x++)
   for (y=-3;y<=3;y++)
   {
      /* x=y ise yeni çevrime gir, alt satırları atla */
      if(x==y) continue;

      if( abs(x)+abs(y)<=3 )
        printf("%2d. (%2d,%2d)\n",k++,x,y);
   }

 return 0;
}