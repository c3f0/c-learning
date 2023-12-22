#include <stdio.h>



int main()
{

  int rows = 5;

  // RIGHT HALF PYRAMID

  printf("\n");
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j <= i; j++) printf("* ");
      printf("\n");
      
    }


  // LEFT HALF PYRAMID
  printf("\n");
  for(int i = rows; i >= 1; i--)
    {
      for(int j = 1; j < i; j++) 
        {
          printf("  ");
        }
      for(int k = rows; k >= i; k--) 
        {
        printf("* ");
        }
        printf("\n");
 
    }

  // FULL PYRAMID
  printf("\n");
  for(int i = rows; i >= 1; i--)
    {
      for(int j = 1; j < i; j++) 
        {
          printf(" ");
        }
      for(int k = rows; k >= i; k--) 
        {
        printf("* ");
        }
        printf("\n");
 
    }

  // INVERTED RIGHT HALF PYRAMID
  printf("\n");
  int rows2 = rows;
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < rows2; j++)
        {
          printf("* ");
        }
      rows2--;
      printf("\n");}

  // RIGHT ROMBUS
  printf("\n");
  rows = 5;
  for(int i = rows; i >= 1; i--)
    {
      for(int j = 1; j < i; j++) 
        {
          printf(" ");
        }
      for(int k = 5 ; k > 0; k--) 
        {
        printf("* ");
        }
        printf("\n");
 
    }

  // RIGHT ROMBUS
  printf("\n");
  
  return 0;
}
