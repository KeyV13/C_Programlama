/* 06prg02.c: Bir yılın artık yil olup olmadığını sınar. */
/*
Mantıksal Operatörler kullanarak birden çok karşılaştırma birleştirilebilir. Buna iyi bir örnek 
Program 6.2'de gösterilmiştir. Program, bir yılın artık yıl olup olmadığını sınar. Bir yıl içinde, 
Şubat ayı 29 gün olursa o yıl artık yıl olarak adlandırılır. Artık yıl peryodik olarak 4 yılda bir gelir. 
Genel kanı "bir yıl 4 ile tam bölünebirse o yıl artık yıldır" şeklindedir. Fakat 1996 artık yıl iken 
1800 artık yıl değildir. Genel sorgulama söyle olmalıdır: Eğer bir yıl

4 ile tam bölünüyorsa VE 100'e tam bölünmüyorsa VEYA
400 'e tam bölünüryorsa
o yıl artık yıldır.
*/

#include <stdio.h>

void main()
{
  int yil;

  printf("Bir yil girin: ");
  scanf("%d",&yil);

  if( yil % 4 == 0 && yil % 100 != 0 || yil % 400 == 0 ) 
       printf("%d artik yil\n",yil);

  else
      printf("%d artik yil degil\n",yil);

}

/*

*/