/********************************************************
 * Ex02 -- program to print out the convertion from seconds to hours and seconds. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: know the conversion into minutes and hours. *
 * *
 * Usage: *
 * put the numbers asked and it will apears. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define cm  60
#define ch  3600

int main(void) {
  float seg; //I defined a float variable for the convertion
  float min; //min and hour will be variables that will commit the result
  float hour;
  printf("que cantidad vamos a converitr \n"); //I ask a number
  scanf("%f",&seg);
  min = seg / cm; //I aplly the formula and then i print in the screen
  printf("el resultado es %f", min);
  printf(" minutos");
  printf("\n");
  hour = seg / ch; //I use the convertion for hours
  printf("el resultado es %f", hour);
  printf(" horas");
  printf("\n");

}
