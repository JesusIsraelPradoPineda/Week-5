/********************************************************
 * Ex01 -- program to print out the area and volume of a cilinder. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: to know the volme of a cilinder as well as the area. *
 * *
 * Usage: *
 * put the numbers and it will apears. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define pi 3.1416 //variable type global and it has a especific value that will never change

int main(void){
  float radio; //I define the things that i will work as radio and altura
  float altura; 
  float resA; //I defined here the variables of the results
  float resB;
  
  printf ("dame radio hijo :v\n"); //I ask the rate and commit it
  scanf("%f",&radio);

  printf ("dame altura babu :v\n"); //I ask the heigth and i commit that
  scanf("%f", &altura);

  printf ("tu altura fue "); //I print the result of area and volume
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
