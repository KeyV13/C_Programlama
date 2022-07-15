/* 01prog01.c: ilk C programi */
#include <stdio.h>

main()
{
   printf("Merhaba Dünya!\n");
}


/*
1. satırda sembolleri(/*) görülmektedir. 
Bu ifadeler arasında yazılan herhangi bir metin, işlem vb. satırlar, derleyici tarafından işlenmez 
(değerlendirilmez). Yani  ifadeleri (/*) açıklama operatörüdür. 

2. satırdaki #include deyimi, programda eklenecek olan başlık dosyanını işaret eder. 
Bu örnekte verilen başlık dosyası (header file) stdio.h dir. 
#include <stdio.h> ifadesi stdio.h dosyasının derleme işlemine dahil edileceğini anlatır.

4. satırdaki main() özel bir fonksiyondur. Ana program bu dosyada saklanıyor anlamındadır. 
Programın yürütülmesine bu fonksiyondan başlanır. 
Dolayısıyla her C programında bir tane main() adlı fonksiyon olmalıdır.

6. satırdaki printf() standart kütüphane bulunan ekrana formatlı bilgi yazdırma fonksiyondur. 
stdio.h dosyası bu fonksiyonu kullanmak için program başına ilave edilmiştir.


Örnek kullanım şekli                         Ekranda yazılacak ifade

printf("Element: Aluminyum");	 	 	       Element: Aluminyum
printf("Atom numarası = %d",13);	 	 	 Atom numarası = 13
printf("Yoğunluk = %f g/cm3",2.7);	 	 	 Yoğunluk = 2.7 g/cm3
printf("Erime noktası = %f derece",660.32);      Erime noktası = 660.32 derece
*/

