#include <stdio.h>
#include <stdbool.h>

bool check_disjoint (int arr1[], size_t size1, int arr2[], size_t size2);

int
main (int argc, char *argv[])
{

  int arr1[] = { 1, 3, 5, 7, 9 };
  int arr2[] = { 2, 4, 6, 8, 10 };

  size_t size1 = sizeof (arr1) / sizeof (arr1[0]);
  size_t size2 = sizeof (arr2) / sizeof (arr2[0]);

  bool is_disjointed = check_disjoint (arr1, size1, arr2, size2);

  if (is_disjointed)
    {
      printf ("Arrays are disjointed!\n");
    }
  else
    {
      printf ("Arrays AREN'T disjointed!\n");
    }

  return 0;
}


bool
check_disjoint (int arr1[], size_t size1, int arr2[], size_t size2)
{

  for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
	{
	  if (arr1[i] == arr2[j])
	    {
	      return false;
	    }
	}
    }
  return true;
}
