#include <stdio.h>

int find_min(int arr[], size_t size);
int find_max(int arr[], size_t size);

int main()
{
  int arr[] = {1, 2, 3};
  size_t size = sizeof(arr) / sizeof(arr[0]);

  int min_value = find_min(arr, size);
  int max_value = find_max(arr, size);

  printf("Minimum number in array is: %d\n", min_value);
  printf("Maximum number in array is: %d\n", max_value);

  return 0;
}

int find_min(int arr[], size_t size)
{
  int min;
  min = arr[0];

  for(int i = 1; i < size; i++)
    {
      if(arr[i] < min) min = arr[i];
    }
    
  return min;
}


int find_max(int arr[], size_t size)
{
  int max;
  max = arr[0];

  for(int i = 1; i < size; i++)
    {
      if(arr[i] > max) max = arr[i];
    }
    
  return max;
}
