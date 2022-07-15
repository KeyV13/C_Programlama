/* 16prg02.c: 
   ogrenci.txt dosyasından no, isim ve not bilgileri okur ve
   notlar arasından en büyüğü, en küçüğü ve sınıf ortlamasını (0'lar hariç) hesaplar. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *dg;        /* dosya işaretçisi */
   char  Ad[10];
   int   Not, No, eb, ek, n, top;
   float ort;

   if( (dg=fopen("ogrenci.txt","r")) == NULL )
     puts("Dosya açılmadı !\n"), exit(1);

   /* başlangıç değerleri ata */
   ek  =  1000;  /* çok büyük */
   eb  = -1000;  /* çok küçük */
   top = 0;      /* notların toplamı */
   n   = 0;      /* notu 0'dan farlı öğrencilerin toplamı */

   while( !feof(dg) )                    /* dosyanın sonuna kadar */
   {
      fscanf(dg,"%d %s %d",&No,Ad,&Not); /* verileri oku! */

      if(Not>eb) eb = Not;               /* en büyük ve en küçük bulunuyor... */
      if(Not<ek) ek = Not;

      if(Not) n++;                       /* Not 0'dan farklı mı? */

      top += Not;                        /* Notlarin toplamı */
   }

   fclose(dg);                           /* dosyayı kapat */

   ort = (float) top/n;                  /* ortalama (0 lar hariç!) */

   printf("En yuksek not = %2d\n",eb);   /* sonuçlar ekrana ... */
   printf("En  dusuk not = %2d\n",ek);
   printf("Ortalama      = %4.1f\n",ort);

 return 0;
}