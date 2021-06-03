#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define cm  60
#define ch  3600

int main(void) {
  float seg;
  float min;
  float hour;
  printf("que cantidad vamos a converitr \n");
  scanf("%f",&seg);
  min = seg / cm;
  printf("el resultado es %f", min);
  printf(" minutos");
  printf("\n");
  hour = seg / ch;
  printf("el resultado es %f", hour);
  printf(" horas");
  printf("\n");

}
