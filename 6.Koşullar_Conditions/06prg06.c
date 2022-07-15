/* 06prg06.c: switch-case yapısı */
/*
Program 6.6 switch-case yapısın farklı bir kullanımı ile ilgili bir örnektir. Programda, önce iki sayı isteniyor 
ardından yapılan seçimle bu sayıların toplamı, farkı, çarpımı veya oranı ekrana yazdırılıyor.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      int   secim;
      float x,y, sonuc;

      printf("Iki sayi girin: ");
      scanf("%f %f",&x,&y);

      puts("*** Menu ***");
      puts("[1] Toplama");
      puts("[2] Cikarma");
      puts("[3] Carpma");
      puts("[4] Bolme");

      printf("Seciminiz: ");
      scanf("%d",&secim);

      switch( secim )
      {
         case 1: 
                sonuc = x + y;
                printf("Toplam = %f\n",sonuc);
                break;
         case 2:
                sonuc = x-y;
                printf("Fark = %f\n",sonuc);
                break;
         case 3:
                sonuc = x * y;
                printf("Carpim = %f\n",sonuc);
                break;
         case 4:
                sonuc = x/y;
                printf("Oran = %f\n",sonuc);
                break;
        default:
                puts("Yanlis secim !\a");
     }

  return 0;
}

/*
switch-case yapısı if-else yapısının bir alternatifidir. Yani, Program 6.6'daki switch-case kısmı, 
if-else yapısı ile de aşağıdaki gibi yazılabilirdi. İnceleyiniz.

 if(secim == 1){
                sonuc = x + y;
                printf("Toplam = %f\n",sonuc);
 }
 else if(secim == 2){
                sonuc = x-y;
                printf("Fark = %f\n",sonuc);
 }
 else if(secim == 3 ){
                sonuc = x * y;
                printf("Carpim = %f\n",sonuc);
 }
 else if(secim == 4){
                sonuc = x/y;
                printf("Oran = %f\n",sonuc);
 }
 else{
                puts("Yanlis secim !\a");
 }
*/