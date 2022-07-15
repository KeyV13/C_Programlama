/* 09prg03.c: Esnek argumanların yazdırılması  */

#include <stdio.h>
#include <stdarg.h>

/* herbiri int tipinde ve sonu -1 ile biten kümeyi ekrana yazar */
void argyaz(int arg, ...)
{
  va_list ap;
  int i;

  va_start(ap, arg);

  for (i = arg; i != -1; i = va_arg(ap, int))
    printf("%d ", i);

  va_end(ap);
  putchar('\n');
}

int main(void)
{
   argyaz(5, 2, 14, 84, 97, 15, 24, 48, -1);
   argyaz(84, 51, -1);
   argyaz(-1);
   argyaz(1, -1);

  return 0;
}