/* #    Çok Boyutlu Diziler

Bir dizi aşağıdaki gibi bildirildiğinde bir boyutlu (tek indisli) dizi olarak adlandırılır. 
Bu tip dizilere vektör denir.

    float a[9];

Bir dizi birden çok boyuta sahip olabilir. Örneğin iki boyutlu b dizisi şöyle tanımlanabilir:

    float b[9][4];

İki boyutlu diziler matris olarak adlandırılır. ilk boyuta satır, ikinci boyuta sütün denir. 
Yukarıda b matrisinin eleman sayısı 9x4=36 dır.

Çok boyutlu diziler tek boyuta indir generek bellekte tutulurlar. Tek indisli dizilerde olduğu gibi, 
çok indisli dizilere de başlangıç değeri vermek mümkün. Örneğin 3 satır ve 4 sütünlu (3x4=12 elemanlı) 
bir x matrisinin elemanları şöyle tanımlanabilir:

    int x[3][4] = {11,34,42,60, 72,99,10,50,  80,66,21,38};
yada
    int x[3][4] = {11,34,42,60,  // 1. satır elemanları
                   72,99,10,50,  // 2. satır elemanları
                   80,66,21,38}; // 3. satır elemanları
*/
/* 11prg01.c: iki matrisin toplamı */

#include <stdio.h>

#define SAT 2
#define SUT 3

int main()
{
    int a[SAT][SUT] = {5, 3, 7,  0, 1, 2};

    int b[SAT][SUT] = {1, 2, 3,  4, 5, 6};
    int c[SAT][SUT];
    int i, j;

    puts("A Matrisi:");
    for(i=0; i<SAT; i++){
      for(j=0; j<SUT; j++)
         printf("%4d",a[i][j]);
      printf("\n");
    }

    puts("B Matrisi:");
    for(i=0; i<SAT; i++){
      for(j=0; j<SUT; j++)
         printf("%4d",b[i][j]);
      printf("\n");
    }

    puts("\nC Matrisi:");
    for(i=0; i<SAT; i++){
       for(j=0; j<SUT; j++){
         c[i][j] = a[i][j] + b[i][j];
         printf("%4d",c[i][j]);
       }
       printf("\n");
    }

  return 0;
}