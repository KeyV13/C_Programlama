/* 15prg04.c
   Yapıların bir fonksiyona parametere olarak aktarılabilmesi */

#include <stdio.h>

struct TARIH{
    int gun,ay,yil;
};

void goster(struct TARIH x){
    printf("Tarih: %02d-%02d-%4d\n", x.gun, x.ay, x.yil);
}

int main()
{
   struct TARIH n;  /* n değişkeni TARIH tipinde */

   n.gun = 1;
   n.ay  = 8;
   n.yil = 2022;

   goster(n);

 return 0;
}