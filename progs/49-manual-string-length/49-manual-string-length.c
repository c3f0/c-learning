#include <stdio.h>

int manual_length(char string[]);

int main(void) 
{
  char string[] = "12345";
  
 
  int result = manual_length(string);
  
  printf("Array has %d elements in it.\n", result);
  
  return 0;
}

// returns how many uniqe values are in array
int manual_length(char string[])
{
  
  int i, c = 0;
  while ( string[i] )
  {
      if (string[i] != '\0') c++;
      i++;
  }
 
  return c;
}
