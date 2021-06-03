/* more than one line comments
are like this
*/


#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define MAX 1000

//

// get the average of three ages

int main(void) {
  int a1, a2, a3;
  int average;
  float averagef;

  printf("write the age of the first person\n");
  scanf("%d",&a1);  // read from prompt

  printf("write the age of the second person\n");
  scanf("%d",&a2);

  printf("write the age of the third person\n");
  scanf("%d",&a3);
  
  average=(a1+a2+a3)/3;
  averagef=(a1+a2+a3)/3;;
  printf("average is %d\n", average);
  printf("average is %f\n", averagef);
  
  // getch(); to wait for a character to prevent a  
  return 0;


}
