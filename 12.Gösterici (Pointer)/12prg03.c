/* 12prg03.c: gösterici (pointer) dizi ilişkisi */

/*  NOT
Bir dizinin, i. elemanına erişmek için *(p+i) işlemi yapılması zorunludur. Yani

  *p+i;          p nin gösterdiği değere (dizinin ilk elemanına) i sayısını ekle
  *(p+i);        p nin gösterdiği adresten i blok ötedeki sayıyı hesapla

anlamındadır. Çünkü, * operatörü + operatörüne göre işlem önceliğine sahiptir. */

#include <stdio.h>

double ortalama(double dizi[], int n);

int main()
{

   double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   double o;

   o = ortalama(a,5);

   printf("Dizinin ortalaması = %lf\n",o);

 return 0;
}

double ortalama(double dizi[], int n)
{
   double *p, t=0.0;
   int i;
  
   p = dizi;    /* veya p = &dizi[0] */

   for(i=0; i<n; i++)
      t += *(p+i);

   return (t/n);
}