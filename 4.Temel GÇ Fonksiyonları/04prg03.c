/* 04prg03.c
    scanf() fonksiyonu ile int ve float tipindeki verilerin okunması */

#include <stdio.h>

main()
{
    int    t;
    float  g;

    printf("Bir gercel sayi girin: "); scanf("%f",&g);
    printf("Bir tamsayi girin    : "); scanf("%d",&t);

    printf("\n");

    printf("\t %f * %f = %f\n",g,g,g*g);
    printf("\t %d * %d = %d\n",t,t,t*t);

 return 0;
}

/*
#      scanf() Fonksiyonu

Birçok programda ekrana verilerin bastırılmasının yanısıra klavyeden veri okunması gerekebilir. 
scanf() fonksiyonu klavyeden veri okumak için kullanılan fonksiyondur. printf() gibi 
scanf() fonksiyonuda Tablo 4.1 ve Tablo 4.2'de verilen karakterleri kullanır. 
Örneğin klaveden bir x tamsayısı okumak için:

      scanf("%d",&x);
satırını yazmak yeterli olacaktır. Burada & işareti adres operatörü olarak adlandırılır ve 
daha sonra ayıntılı olarak açıklanacaktır. Klavyeden iki farklı sayı okunmak istendiğnde 
scanf() fonksiyonu şöyle kullanılabilir:

      scanf("%d %f",&x,&y);
veriler klavyeden
      16 1.56
yada
      16    1.56
veya
      16 
      1.56
şekilinde girilebilir. Program 4.3'de scanf() fonsiyonunun kullanımı gösterilmiştir.

*/