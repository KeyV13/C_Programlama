/* 10prg04.c
   Seçerek Sıralama (Selection Sort) Algoritması ile bir
   dizinin elemanlarını büyükten küçüğe dogru sıralar
   (algoritmanın karmaşıklığı): n*(n-1)/2 dir.  */

#include <stdio.h>

#define n 10

int main(void)
{
   int   a[n] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700};
   int   i, j, k, eb;

   /* Dizinin kendisi */
   printf("Once : ");
   for(k=0;k<n;k++)
      printf("%5d ",a[k]);

   /* Sırala */
   for(k=0; k<n-1; k++){

      eb = a[k]; 
       i = k;

       for(j=k+1; j<n; j++)
          if( a[j]>eb ){
            eb = a[j];
             i = j; 
          }

       a[i] = a[k];
       a[k] = eb;
   }

   /* Sıralama bitti */
   printf("\nSonra: ");
   for(k=0; k<n; k++)
      printf("%5d ",a[k]);

   printf("\n");

 return 0;
}