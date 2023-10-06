#include <stdio.h>


int occurance_in_arr(int arr[], size_t size, int find);
int print_arr_elements(int arr[], size_t size, char *arr_elements);

int main()
{
  int arr[] = {1, 2, 2, 3, 3, 3};
  size_t size = sizeof(arr) / sizeof(arr[0]);
  
  int find = 3;
  
  int value = occurance_in_arr(arr, size, find);
  char arr_elements[100];

  print_arr_elements(arr, size, arr_elements);
  printf("Number: %d occurc %d times in array: {%s}\n", find, value, arr_elements);

  return 0;
}

int occurance_in_arr(int arr[], size_t size, int find)
{
  
  int count = 0;
  for(int i = 0; i < size; i++)
    {
      if(arr[i] == find) count++;
    }

  return count;
}

int print_arr_elements(int arr[], size_t size, char *arr_elements)
{
  int count = 0;
  while(count < size)
    {
      if((count + 1) == size) arr_elements += sprintf(arr_elements, "%d", arr[count]);
      else arr_elements += sprintf(arr_elements, "%d, ", arr[count]);
      count++;
    }

  return 0;
}
