/* 08prg01b.c: iki sayıyı toplar ve sonucu ekranda gösterir */
// Belki karmaşık gelmiş olabilir. Fakat Program 8.1 daha kısa şöyle yazılabilirdi:

#include <stdio.h>
 
 int topla( int x, int y ){
    return (x+y);
 }

int main(void)
{
    int toplam,a,b;

    printf("Iki sayi girin : ");
    scanf("%d %d",&a,&b);

    toplam = topla(a,b);
 
    printf("%d ve %d nin toplami  %d dir.\n", a,b,toplam);

  return 0;
}