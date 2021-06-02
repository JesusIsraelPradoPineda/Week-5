#include <stdio.h>
#include <conio.h>
main ()
{
  int a=7, b=3 c=2 resultado;
  resultado = ((b%c)/2)+1;
  resultado %= ++a;
  printf("\n el valor de resultado = %d\t a= %d"); //imprime el resultado que tenga A despues de ser operada
  getch();
  return 0;
}