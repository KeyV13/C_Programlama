/* 10prg07.c: Bir karakter dizisini tersyüz eder */

#include <stdio.h>

int main(void)
{
   char s[40], gecici;
   int  i, n;

   /* diziyi oku */
   printf("Bir seyler yazin : ");
   gets(s);

   /* sonlandırıcı karaktere kadar */
   for(n=0; s[n] != '\0'; n++)
      ;

   for(i=0; i<n/2; i++){
      gecici   = s[n-i-1];
      s[n-i-1] = s[i];
      s[i]     = gecici;
   }

   printf("Tersi            : %s\n",s);

 return 0;
}