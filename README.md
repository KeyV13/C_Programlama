# C_Programlama
##  C Kodlarının Temel Özellikleri
Bir C programı aşağıda verilen özellikleri mutlaka taşımalıdır.
>> Yazılımda kullanılacak olan her fonksiyon için ilgili başlık dosyası programın başına ileve edilmedlidir.
>> Her C programı main() fonksiyonunu içermelidir.
>> Program içinde kullanılacak olan değişkenler ve sabitler mutlaka tanımlanmalıdır.
>> Satırın sonuna ; işareti konmalıdır.
>> Her bloğun ve fonksiyonun başlangıcı ve bitişi sırasıyla { ve } sembolleridir.
>> C dilinde yazılan kodlarda küçük-büyük harf ayrımı vardır (case sensitive).
Örneğin A ile a derleyici tarafından farklı değerlendirilir.
>> Açıklama operatörü // (aralarında yıldız olacak) sembolleridir.
##  Kod Yazımı için Bazı Tavsiyeler
>> Program açıklamalarını ve döküman hazırlama işini program yazıldıkça yapın! 
Bu unutulmaması gereken çok önemli husustur.
>> Değişken, sabit ve fonksiyon adları anlamlı kelimelerden seçilip yeterince uzun olmalıdır. 
>> Eğer bu isimler bir kaç kelimeden oluşacak ise, kelimeler alt çizgi ( _ ) ile ayrılmalıdır 
veya her kelime büyük harfle başlamalıdır. Örneğin:
 int son_alinan_bit;
 void KesmeSayisi();
 float OrtalamaDeger = 12.7786;
>> Sabitlerin bütün harflerini büyük harfle yazın. Örneğin:
 #define PI 3.14;
 const int STATUS = 0x0379;
>> Her alt yapıya girerken birkaç boşluk veya TAB tuşunu kullanın. Bu okunabilirliği arttıracaktır. Örneğin:
 k = 0;
 for(i=0; i<10; i++)
 {
       for(j=0; j<i; j+=2)
       {
             do{
                    if( j>1 )  k = i+j;
                    x[k] = 1.0/k;
               }while(k!=0);
       }
 }
>> Aritmetik operatörler ve atama operatörlerinden önce ve sonra boşluk karakteri kullanın. 
Bu, yazılan matematiksel ifadelerin daha iyi anlaşılmasını sağlayacaktır.Örneğin:
 h_max = pow(Vo,2) / (2*g);
 Tf    = 2*Vo/g;
 Vy    = Vo - g*t;
 y     = Vo*t - (g*t*t)/2.0;
 z     = ( a*cos(x) + b*sin(x) )*log( fabs(y) );
>> Program bittikten sonra tekrar tekrar programınızı inceleyerek, programınızı daha iyi şekilde yazma yollarını
arayın ve aynı fonksiyonları daha kısa algoritmalarla ve/veya daha modüler şekilde elde etmeye çalışın.
*/
