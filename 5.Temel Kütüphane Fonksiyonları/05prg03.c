/* 05prg03.c 
   ASCII kodları 32-127 arasında olan karakterler üzerinde 
   ctype.h kütüphanesinde tanımlı bazı makroların kullanımı */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int  i;
   char c;

   for(i=32; i<127; i++)
   {
     c = toascii(i);
     printf("%d\t%c\t%c\t%d\n", i,c,tolower(c),isdigit(c));
   }

 return 0;
}


/*
#     Karakter Üzerinde İşlem Yapan Fonksiyonlar (ctype.h)

Tablo 5.3: ctype.h Kütüphanesinde tanımlı fonksiyonlar

Fonksiyon Bildirimi	              Açıklama	                                              Örnek	      Sonuç

isalpha(c)	        c bir harf ise 0 dan farklı, değilse 0 gönderir	                    isalpha('a')	8
isalnum(c)	        c A-Z, a-z veya 0-9 arasında ise 0 dan farklı, değilse 0 gönderir	isalnum('a')	1
isascii(c)	        c bir ASCII karakter ise 0 dan farklı, değilse 0 gönderir	        isascii('a')	1
isdigit(c)	        c bir rakam ise 0 dan farklı, değilse 0 gönderir	                isdigit('4')	2
islower(c)	        c a-z arasında ise 0 dan farklı, değilse 0 gönderir	                islower('P')	0
isupper(c)	        c A-Z arasında ise 0 dan farklı, değilse 0 gönderir	                islower('P')	4
toascii(c)	        c sayısı ile verilen ASCII koda sahip karakteri elde eden makro	    toascii(65)	    A
tolower(c)	        c karakterini küçük harfe çevirir	                                tolower('D')	d
toupper(c)	        c karakterini büyük harfe çevirir	                                toupper('b')	B


*/