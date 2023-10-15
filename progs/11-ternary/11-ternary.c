#include <stdio.h>
  
int main(void)
{
  int a = 5;
  int b = 2;
  int c = 0;

  if(a == b) c = 10;
  else c = 5;

  printf("c: %d\n", c);


  int d = 5;
  int e = 2;
  int f = 0;
  // this is ternary operator in use
  // if it's true value will be 666
  // it it's false than 777
  f = ( d != f ) ? 666 : 777;
  printf("f: %d\n", f);
    
  // ternary operator inside of an expression
  // a == c
  int result1 = 10 * ((a == c) ? 3 : 2);
  // d != e
  int result2 = 2 * ((d != e) ? 4 : 6);
  printf("Result: %d\n", result1);
  printf("Result: %d\n", result2);

  return 0;
}
