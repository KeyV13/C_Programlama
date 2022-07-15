/* 11prg02.c: 3x3 boyutundaki iki kare matrisin çarpımı */

#include <stdio.h>

#define N  3

int main()
{
    int a[N][N], b[N][N], c[N][N];
    int i,j,k,toplam;

    puts("A Matrisini girin:");
    for(i=0; i<N; i++)
       for(j=0; j<N; j++)
          scanf("%d",&a[i][j]);

    puts("B Matrisini girin:");
    for(i=0; i<N; i++)
       for(j=0; j<N; j++)
          scanf("%d",&b[i][j]);


    puts("\nC Matrisi:");
    for(i=0; i<N; i++){
       for(j=0; j<N; j++){
      
          for(toplam=0, k=0; k<N; k++)
             toplam += a[i][k]*b[k][j];

          c[i][j] = toplam;
          printf("%4d",c[i][j]);
       }
       printf("\n");
    }

 return 0;
}