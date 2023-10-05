#include <stdio.h>

int find_min(int arr[], size_t size);

int main()
{
  int arr[] = {1, 2, 3};
  size_t size = sizeof(arr) / sizeof(arr[0]);
  int value = find_min(arr, size);
  printf("Minimum number in array is: %d\n", value);

  return 0;
}

int find_min(int arr[], size_t size)
{
  int min;
  min = arr[0];

  for(int i = 1; i < size; i++)
    {
      if(min > arr[i]) min = arr[i];
    }
    
  return min;
}
