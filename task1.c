#include <stdio.h>

int main(void)
{
  int a,b,c=3,d=2;
  a=8-5*3+2;
  b=7%3+4*2;
  printf("valor de a %d\tvalor de b %d\n",a,b);//muestra el avlor que tiene a y el que tiene b
  b%=a;
  printf("valor de b %d\t\n",b);//b y a estaran definidos y seran iguales
  b=(-4)%3;
  printf("valor de b %d\t\n",b);//se opera b y el resultado se imprime
};