#include <stdlib.h>
#include <stdio.h>

// this function returns memory address
// to pointer on the heap
int *array_copy (int *array, size_t length);

int
main ()
{
  int a1[] = { 1, 2, 3 };
  int a2[] = { 6, 6, 6 };
  int a3[] = { 94, 12, 3, 44, 700};
  size_t length1 = sizeof (a1) / sizeof (a1[0]);
  size_t length2 = sizeof (a2) / sizeof (a2[0]);
  size_t length3 = sizeof (a3) / sizeof (a3[0]);

  int *a1_copy = array_copy(a1, length1);
  int *a2_copy = array_copy(a2, length2);
  int *a3_copy = array_copy(a3, length3);
    
  // this assignment will not 
  // affect our copy of the array
  a1[0] = 999;
  for(int i = 0; i < length1; i++)
    {
      printf("a[%d] = %d\n", i, a1_copy[i]);
    }
    
  printf("\n");
    
  for(int i = 0; i < length2; i++)
    {
      printf("a[%d] = %d\n", i, a2_copy[i]);
    }
    
  printf("\n");
    
  for(int i = 0; i < length3; i++)
    {
      printf("a[%d] = %d\n", i, a3_copy[i]);
    }

  return 0;
}

int *
array_copy (int *array, size_t length)
{
  int *c = malloc (length * sizeof (int));
  for (int i = 0; i < length; i++)
    c[i] = array[i];

  return c;
}
