#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX 2000

// 

int main(void) 
{
  const int uno=1;
  int x=1;

  printf("x is %d \n",x);
  x=x-3;
  printf("x is %d \n",x);
  x++; // means x = x+1
  printf("x is %d \n",x);
  x++;
  printf("x is %d \n",x);
  x--;  // means x = x-1
  printf("x-- is %d \n",x);
  printf("x is %d \n",uno);
  //uno=2; this is an error, because uno is constant
  printf("%zu\n", sizeof(int));
  printf("Hello World\n");
  // relational operators
  printf("3 == 2 is false or %d \n",3 == 2); // => 0 (false)
  printf("3 != 2 is true or %d \n",3 !=2); ; // => 1 (true)
  printf("3 > 2 is true or %d \n",3>2);  // => 1
  printf("3 < 2 is false of %d \n",3<2);  // => 0
  printf("2 <= 2 is true or %d \n",2<=2); // => 1
  printf("2 >= 2 is true or %d \n", 2>=2); // => 1


// Logic operators works on ints
  printf("result of !3 is %d \n", !3); // => 0 (Logical not)
  printf("this is %d \n", !0) ; // => 1
  printf("1 && 1 returns %d \n",1 && 1); // => 1 (Logical and)
  printf("this is a commit %d \n", 0 && 1); // => 0
  printf("imprime xd %d \n", 1 && 0); // -> 0
  printf("thi is a commit2 %d \n",0 && 0); // -> 0
 printf("This is a commit3 %d \n", 1 || 1); // => 1
 
 printf("this is a commit from tepito %d \n", 0 || 1); // => 1 (Logical or)
 printf("this is a commit 5 %d \n", 1 || 0); // => 1
 printf("this is a commit 489883283 %d \n", 0 || 0); // => 0


  return 0;
} 