/* 08prg04.c: Basit bir kutu çizen fonksiyon */

#include <stdio.h>

void kutu_ciz( int satir, int sutun )
{
     int sut;
     for ( ; satir > 0; satir--)
     {
        for (sut = sutun; sut > 0; sut--)
          printf("*");

          printf("\n");
     }
}

int main(){

    kutu_ciz(8,35);

 return 0;
}