#include <stdio.h>

int sum_arr(int arr[], size_t size); 

int main()
{
  int arr_sum; 
  int arr[] = {1, 2, 3, 4, 5};
  size_t size = sizeof(arr) / sizeof(arr[0]);
  arr_sum = sum_arr(arr, size);

  printf("Sum of all the digits in array = %d\n", arr_sum);
  return 0;
}

int sum_arr(int arr[], size_t size)
{
  int sum = 0;
  for(int i = 0; i < size; i++)
    {
      sum += arr[i];
    }

  return sum;
}
