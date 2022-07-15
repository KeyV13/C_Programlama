/* Katarlar anlaşılması en zor konulardan biridir. C programlama dilinde iki tırnak içine alınan her ifadeye 
katar denir. Örneğin:

     "Izmir"
     "sonuc = %d\n"
     "Devam etmek icin ENTER tusuna basin."
>> Türkçe yazılan C kitaplarda, ingilizce string kelimesi yerine aşağıdaki ifadelerden biri karşılaşılabilir:

katar = karakter topluluğu = karakter dizisi = sözce = sicim 

>> Genel olarak bir katarın (string) bildirimi:

      char katar_adı[eleman_sayısı];
yada
      char *katar_adı;

>> printf() ve scanf() fonksiyonları diğer tiplerde olduğu gibi formatlı okuma/yazma amaçlı kullanılır. 
Katar formatı %s dir. Örneğin:

     char str[20];
     ...
     scanf("%s",str);
     printf("%s\n",str);
>> puts() fonksiyonu bir karakter dizisini ekrana yazdırmak için kullanılır. Bu fonksiyon diziyi ekrana yazdırdıktan sonra imleci (cursor) bir sonraki satıra geçirir.

      char *str = "Hangi cilgin bana zincir vuracakmis sasarim";
      ...
      puts(str);
puts(str) ile printf("%s\n",str) işlevsel olarak birbirine eşdeğerdir.
*/

/* 13prg01.c
   Bir katarın (string) farklı yöntemlerle ekrana yazılması */

#include <stdio.h>

int main()
{
     char dizi[7] = {'S', 'e', 'l', 'a', 'm', '!', '\0'};
     int i;

     /* Herbir karakteri ayrı ayrı alt alta yaz */
     printf("Dizi elemanlari:\n");
     for (i=0; i<7; i++)
        printf("dizi[%d] icerigi: %c\n", i, dizi[i]);
     printf("\n");

     /* 1. yöntem: her elemanı yanyana yaz */
     printf( "Butun dizi (1.yontem): ");
     for (i=0; i<7; i++)
        printf("%c", dizi[i]);

     /* 2. Yöntem: bütün diziyi yaz */
     printf("\nButun dizi (2.yontem): ");
     printf("%s\n", dizi);

     printf("\n");

 return 0;
}