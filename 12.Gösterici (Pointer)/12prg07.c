/*  Fonksiyon adının bellete yer işgal ettiği şöyle öğrenilebilir:

          int f(int);       fonksiyon bildirimi 
          int (*pf)(int);   fonksiyon göstericisi bildirimi
          pf = &f;          f'nin adresini pf'ye ata!         */
 /* 12prg07.c:  Bir fonksiyonun 'adresini' öğrenme */

#include <stdio.h>

int f(int n){
  int f=1, i;
  for(i=1; i<n; i++)
    f*=i;
  return f;
}

int main()
{
  int (*pf)(int);
  pf = &f;

  printf("Fonksiyonun adresi = %p\n", &f);
  printf("Fonksiyonun adresi = %p\n", pf);

  return 0;
}