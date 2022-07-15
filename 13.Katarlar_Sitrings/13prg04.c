/* 13prg04.c: Basit bir şifre programı. 
   Kullanıcı en fazla 3 kez yanlış şifre girebilir. */

#include <stdio.h>
#include <string.h>

int main()
{
   char sifre[8];
   int  sonuc, hak=3;

   while( hak-- > 0 )
   {
      printf("Sifre : ");
      gets(sifre);                    /* şifreyi al */

      sonuc = strcmp(sifre,"elma%xj4");

      if( sonuc==0 ){                 /* şifre kontrol */
         puts("sifre dogru");
         break;
      }
      else
         puts("sifre yanlis");
   }

  return 0;
}