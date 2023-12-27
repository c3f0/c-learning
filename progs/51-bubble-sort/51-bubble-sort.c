#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int a[], int length);

int main(void)
{
  int a[] = {1,3,2,4,5,6,7};
  
  size_t length = sizeof(a) / sizeof(a[0]);

  bubble_sort(a, length);

  int k = 0;
  while ( a[k] < length )
  {
    printf("%d ", a[k]);
    k++;
  }
  return 0;
}

void bubble_sort(int a[], int length)
{
  int i = 0;
  bool values_swaped;
  do 
  {
      values_swaped = false;
      int j = 0;
      
      // we need to substract one from length of array
      // because we want to do our last compare
      // second to last element with last element
      // not last element with last + one element
      // that why we need to stop one step before
      
      // another thing is optimazation by substracting i from
      // amount of passes. With each pass, last elemment will
      // be always the largest one, so we don't have to compare
      // values to it!
      while ( a[j] < length - 1 - i)
      {
          if ( a[j] > a[j + 1])
          {
            int tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
            values_swaped = true;
          }
          j++;
      }
    i++;
  } while ( values_swaped );
  printf("Number of passes: %d\n", i);
}
