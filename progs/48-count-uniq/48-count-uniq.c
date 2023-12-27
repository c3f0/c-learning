#include <stdio.h>

int count_unique(int arr[], int length);

int main(void) 
{
  int arr[] = {1,2,2,3,3,4,1,7};
  
  // calculate array length
  size_t length_a = sizeof(arr) / sizeof(arr[0]);
  
  // assign result from function
  int result = count_unique(arr, length_a);
  
  printf("Array has %d non-repeating elements in it.\n", result);
  
  return 0;
}

// returns how many uniqe values are in array
int count_unique(int arr[], int length)
{
  // counter variables
  int i, j, k = 0;
  
  // outer loop holds index i
  for ( i = 0; i < length; i++)
  {
      // inner loop increments index j and compares it to index i
      for ( j = 0; j < length; j++)
      {
          // if loop encounters same value
          // break loop and try next index
          if (arr[i] == arr[j] && i !=j)
          break;
      }
      // if loop will go throu all indexes without breaking
      // it means that this value is uniqe and we can
      // increament counter k
      if( j == length) k++;
  }
  
  return k;
}
