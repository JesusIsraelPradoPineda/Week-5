#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define pi 3.1416

int main(void){
  float radio;
  float altura;
  float resA;
  float resB;
  
  printf ("dame radio hijo :v\n");
  scanf("%f",&radio);

  printf ("dame altura babu :v\n");
  scanf("%f", &altura);

  printf ("tu altura fue ");
  printf ("%f",altura);
  printf (" y tu radio de ");
  printf ("%f",radio);
  printf ("\n");

  resA = pi*radio*radio*altura;
  printf ("tu volumen es %f",resA);
  printf (" (unidad de medida)^3 \n");

  resB = (2*(pi*radio*radio))+((pi*(2*radio))*altura);
  printf ("el area del cilidro es ");
  printf ("%f", resB);
  printf (" (unidad de medida)^2 \n");
  
  return 0;
}
