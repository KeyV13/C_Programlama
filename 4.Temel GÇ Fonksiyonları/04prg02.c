/* 04prg02.c
   printf fonksiyonunun geri dönüş değerini gösterir */

#include <stdio.h>

int main()
{
   int karSay;
   int sayi = 1234;

   karSay = printf("Ugurlu sayim = %d\n",sayi);

   printf("Ust satirda karakter sayisi: %d dir\n", karSay);

   return 0;
}

/*
printf fonksiyonunun geri dönüş değeri int tipindedir. Bu geri dönüş değeri çıktının kaç karakter 
olduğunu gösterir. Yani, printf fonksiyonu, *format ile tanımlanmış karakter topluluğunun kaç bayt olduğu
hesaplar. Program 4.2, printf'in bu yönünüde ortaya çıkaran bir programdır.

11. satırdaki işlemle, hem ekrana Ugurlu sayim = 1324 iletisi bastırılmakta, hem de karSay değişkenine 
bu iletinin uzunluğu atanmaktadır. Ekrana basılan karakterlerin sayısı (\n karakteri dahil) 20 dir.
*/