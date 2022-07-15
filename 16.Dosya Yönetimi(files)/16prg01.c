/*   Dosya Açma ve Kapama
Bir dosyaya okuma/yazma yapmak için onun açılması gerekir. Dosya açmak için fopen(), kapatmak için fclose() 
fonksiyonu kullanılır. Bu fonksiyonlar stdio.h başlık dosyasında tanımlanmıştır.

Genel olarak, dosya açma kapama adımları şu şekildedir:
      FILE *dosya; /* dosya göstericisi

      dosya = fopen(const char dosya_adı, const char mod);

      ...
      dosya işlemleri
      ...

      fclose(dosya);
Burada FILE, stdio.h içerisinde bildirilmiş bir yapıdır. mod ile açılacak olan dosyanın ne amaçla açılacağı 
belirlenir 

           Dosya açma modları
Açılış Modu	   İşlem Türü
    r	       Salt okunur (read only). Dosyanın açılabilmesi için önceden oluştrulmuş olması gerekir.
    w	       Yalnızca yazma (write only). Dosya diskte kayıtlı olsun veya olamsın dosya yeniden oluşturulur.
    a	       Ekleme (append). Kayıtlı bir dosyanın sonuna veri eklemek için açılır.
    r+	       Okuma ve yazma. Bu modda açılmış olan bir dosyanın daha önce varolması gerekir.
    w+	       Okuma ve yazma. Bu modda açılmış olan bir dosya var olsun veya olmasın dosya yeniden oluşturulur.
    a+	       Okuma ve yazma. Kayıtlı bir dosyanın sonuna veri eklemek için açılır.
    NOT
deneme.dat dosyası ile ana program aynı dizin içinde olmalıdır. Aksi halde, dosyanın tam yolu bildirilmelidir.
Örneğin dosyanın yolu: C:\WINDOWS\DESKTOP\deneme.dat ise dosya açılırken

  yaz = fopen("C:\\WINDOWS\\DESKTOP\\deneme.dat", "w");

şeklinde açık yol bildirilmelidir. Aynı işlem Linux ortamında da geçerlidir.

  yaz = fopen("/home/bingul/DATA/deneme.dat","w");

gibi.
  Dosya Fonksiyonları
Fonksiyon	Görevi
fopen()	    Dosya oluşturur, açar
fclose()	Dosyayı kapatır
putc()	    Dosyaya bir karakter yazar
getc()	    Dosyadan bir karakter okur
feof()	    Dosya sonuna gelindiğini sorgular
fprintf()	Dosyaya formatlı veri yazar
fscanf()	Dosyadan formatlı veri okur
fputs()   	Dosyaya katar yazar
fgets()	    Dosyadan katar okur
fwrite()	Dosyaya dizi yazar
fread()	    Dosyadan dizi okur
*/

/* 16prg01.c: 
   10 öğrenciye ait bilgileri 'ogrenci.txt' dosyasına kaydeder. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dg;           /* dosya göstericisi */
    const int n = 10;   /* öğrenci sayısı    */
    char  ad[10];
    int   no, Not, i=0;

    dg = fopen("ogrenci.txt", "w");

    if(  dg == NULL )
      puts("ogrenci.txt dosyasi acilmadi. !\n"), exit(1);

    puts("10 ogrenciye ait bilgileri girin:");

    while( i++<n )
    {
      printf("%d. ogrencinin numarasi: ",i); scanf("%d",&no);
      printf("%d. ogrencinin adi     : ",i); scanf("%s",ad);
      printf("%d. ogrencinin notu    : ",i); scanf("%d",&Not);
      printf("\n");

      fprintf(dg,"%5d %10s %3d\n",no,ad,Not); /* verileri formatlı yaz! */
    }

    /* dosyayı kapat */
    fclose(dg);  

    puts("Bilgiler kaydedildi.\a");

 return 0;
}