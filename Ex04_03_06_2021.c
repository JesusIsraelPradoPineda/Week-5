/********************************************************
 * Ex04 -- program to print out % whit 3 people. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Use of % when you want buy something. *
 * *
 * Usage: *
 * put the numbers and it will apears. *
 ********************************************************/


#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations


int main(void) {
  float P1; //I define a non integer variable (and it is in all of them//
  float P2;
  float P3;
  float sum;
  float res1;
  float res2;
  float res3;
  printf("supon que entre 3 van a comprar algo...\n"); // I give information about the project using a screen print
  printf("cuanto dinero dio usuario 1\n"); //i ask the money for the first usuary and i commit the variable
  scanf("%f",&P1);
  printf("cuanto dinero dio usuario 2\n");//is the same step
  scanf("%f",&P2);
  printf("cuanto dinero dio usuario 3\n");
  scanf("%f",&P3);
  sum = P1+P2+P3; //I do the matematical operation in order to knok the %
  res1 = (100*P1)/sum;
  res2 = (100*P2)/sum;
  res3 = (100*P3)/sum;
  printf("el usuario 1 dio el %f",res1); //I got the % and i share in the screen 
  printf(" porciento \n");
  printf("el usuario 2 dio el %f",res2);
  printf(" porciento \n");
  printf("el usuario 3 dio el %f",res3);
  printf(" porciento \n");

}
