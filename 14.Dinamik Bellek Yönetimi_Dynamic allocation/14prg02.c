/* 14prg02.c: Bir katarın(string) parçalarini (alt katar/string) veren fonksiyon */
#include <stdio.h>
#include <stdlib.h>

char *altKatar(char *str, int, int);

int main()
{
   int  i;
   char *s, *parca;

   s = "programlama";

   for(i=0; s[i]; i++)
   {
      parca = altKatar(s, 0, i);
      puts(parca);
   }

 return 0;
}

/* str'nin p1. elemanindan p2. elemanina kadar olan alt katarını gonderir. */
char *altKatar(char *str, int p1, int p2)
{  
   int i, j=0, n;
   static char *alt;
   n = p2 - p1;
 
   /* bellekten yer ayrılıyor... */
   alt = (char *) malloc( n*sizeof(char) );

   for(i=p1; i<=p2; i++)
     alt[j++] = str[i];

   return alt;
}