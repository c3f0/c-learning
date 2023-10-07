#include <stdio.h>

void reverse_arr (int arr[], size_t size);

int
main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
  size_t size = sizeof (arr) / sizeof (arr[0]);

  reverse_arr (arr, size);

  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }

  printf ("\n");

  return 0;
}

void
reverse_arr (int arr[], size_t size)
{
  int count = size - 1;
  int temp;

  for (int i = 0; i < size / 2; i++)
    {
      temp = arr[i];
      arr[i] = arr[count];
      arr[count] = temp;
      count--;
    }
}
