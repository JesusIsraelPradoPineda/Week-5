#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations


int main(void) {
  float P1;
  float P2;
  float P3;
  float sum;
  float res1;
  float res2;
  float res3;
  printf("supon que entre 3 van a comprar algo...\n");
  printf("cuanto dinero dio usuario 1\n");
  scanf("%f",&P1);
  printf("cuanto dinero dio usuario 2\n");
  scanf("%f",&P2);
  printf("cuanto dinero dio usuario 3\n");
  scanf("%f",&P3);
  sum = P1+P2+P3;
  res1 = (100*P1)/sum;
  res2 = (100*P2)/sum;
  res3 = (100*P3)/sum;
  printf("el usuario 1 dio el %f",res1);
  printf(" porciento \n");
  printf("el usuario 2 dio el %f",res2);
  printf(" porciento \n");
  printf("el usuario 3 dio el %f",res3);
  printf(" porciento \n");

}
