#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv[])
{
  if (argc != 2) return 2;
  else
    {
      int num = atoi(argv[1]); 

      if(num % 2 == 0) return 0; 
      else return 1;
    }
}
