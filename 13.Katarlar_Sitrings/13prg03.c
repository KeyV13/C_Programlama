/* 13prg03.c: Bir elemanları katar(string) olan karakter dizisini yazdırma */

#include <stdio.h>

int main()
{
  char *gun[7] = { "Pazartesi", "Sali", "Carsamba", 
                   "Persembe", "Cuma", "Cumartesi", "Pazar" };
  int i;

  for(i=0; i<7; i++)
    printf("%d. %s\n",i+1,gun[i]);

 return 0;
}