#include <stdio.h>
int main (void)
{
 int c=3, d=2;
 c -= d++ + 3;
 printf (" valor de c %d\tvalor de %d\n",c,d); //se muestra el valor de C cuando fue modificado, asi como D inicial
}