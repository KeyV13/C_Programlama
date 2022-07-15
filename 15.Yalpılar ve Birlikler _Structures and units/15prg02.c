/* 15prg02.c: Beş sabit bölüm için enum kullanımı */

enum bolumler{
   programcilik = 1,  /* 1 */
   donanim,           /* 2 */ 
   muhasebe,          /* 3 */
   motor,             /* 4 */
   buro               /* 5 */
} bolum;

int main()
{
    bolum = donanim;

    printf("bolum : %d\n",bolum);

    bolum += 2;  /* bolum = motor */

    printf("Yeni bolum : %d\n",bolum);

 return 0;
}