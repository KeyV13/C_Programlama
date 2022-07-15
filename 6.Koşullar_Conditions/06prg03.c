/* 06prg03.c:
    ax*x + bx + c = 0 denkleminin (karmaşık sayılı kökler dahil) çözümü */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2, x, kok_delta;

    printf("a, b, c degerlerini girin:\n");
    scanf("%f %f %f",&a,&b,&c);

    delta = b*b - 4.0*a*c;

    if( delta > 0.0 ){
       x1 = ( -b + sqrt(delta) )/( 2.0*a );
       x2 = ( -b - sqrt(delta) )/( 2.0*a );

       printf("\nReel kokler:");
       printf("\nx1 = %f",x1);
       printf("\nx2 = %f",x2);
    } 
    else if( delta < 0.0 ){
       kok_delta = ( sqrt(-delta) ) / (2.0*a);
       x = -0.5*b/a;

       printf("\nKarmasik kokler:");
       printf("\nx1 = %f + (%f)i", x, kok_delta);
       printf("\nx2 = %f - (%f)i", x, kok_delta);
    }
    else{
       x = -0.5*b/a;

       printf("\nKokler eşit:");
       printf("\nx1 = x2 = %f",x);
    }

  return 0;
}

/*
Eğer program içinde kullanılacak koşulların sayısı ikiden çok ise aşağıdaki yapı kullanılır:

      if(koşul_1)
      {
        ...
        deyimler; (küme_1)           
        ...
      }
      else if(koşul_2)
      {
        ...
        deyimler; (küme_2)
        ...
      }
      .
      .
      .
      else if(koşul_n-1)
      {
        ...
        deyimler; (küme_n-1)
        ...
      }
      else
      {
        ...
        deyimler; (küme_n)
        ...
      }
Program 6.3, ax^2 + bx + c = 0 formundaki ikinci dereceden bir polinomun köklerini hesaplamaktadır. 
Programda delta değerinin sıfırdan küçük olması durumda köklerin karmaşık sayıya dönüşeceğide göz önüne 
alınmıştır. Bu program if, else if ve else yapısı göstermek için klasik bir örnektir.
*/