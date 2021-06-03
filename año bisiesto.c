#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define MAX 1000

//

// get the average of three ages

int main(void) {
  int a1 ;
  int a2;

  printf("what year do you want know?\n");
  scanf("%d",&a1);  // read from prompt
  if (a1 % 400 == 0){
    printf ("%d",a1);
    printf (" is the year and therefore is bisiesto");
  }
  else if (a1 % 100 == 0 ) {
    printf ("%d",a1);
    printf (" is the year and therefore is not bisiesto");
  }
  else if (a1 % 4 == 0) {
    printf ("%d",a1);
    printf (" is the year and therefore is bisiesto");
  }
  else {
    printf ("%d",a1);
    printf (" is the year and therefore is not bisiesto");
  }
  return 0;


}
