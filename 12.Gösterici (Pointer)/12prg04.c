/* 12prg04.c: Değer geçerek ve adres geçerek aktarım */
// C (ve C++) programlama dilinde fonksiyon parametreleri değer geçerek (pass by value) 
// yada adres geçerek (pass by reference) olarak geçilebilir.
#include <stdio.h>

void f1(int  );   /* iki fonksiyon */
void f2(int *);

int main()
{
   int x = 55;

   printf("x in degeri,\n");
   printf("Fonksiyonlar cagrilmadan once: %d\n",x);

   /* f1 fonksiyonu çağrılıyor...*/ 
   f1(x);     
   printf("f1 cagirildiktan sonra       : %d\n",x);


   /* f2 fonksiyonu çağrılıyor...*/ 
   f2(&x);
   printf("f2 cagirildiktan sonra       : %d\n",x);

 return 0;
}


/* Değer geçerek aktarım */
   void f1(int n){
      n = 66;
      printf("f1 fonksiyonu icinde         : %d\n",n);
   }

/* Adres geçerek aktarım */
   void f2(int *n){
      *n = 77;
      printf("f2 fonksiyonu icinde         : %d\n",*n);
   }