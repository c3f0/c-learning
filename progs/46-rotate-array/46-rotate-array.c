#include <stdio.h>

// function to rotate (shift) array in "LEFT" or "RIGHT" direction
// by n times given to it
void rotate_arr(int arr[], size_t size, int n, char *direction);

int
main (int argc, char *argv[])
{

  // initiate array
  int arr[] = { 1, 2, 3, 4 };

  // provide direction
  char *direction = "right";

  // calculate size of array
  size_t size = sizeof (arr) / sizeof (arr[0]);

  // print initial state of an array
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }

  printf ("\n");

  // function call
  rotate_arr(arr, size, 1, direction);

  // print array state after rotation
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }
    
  return 0;
}



void
rotate_arr(int arr[], size_t size, int n, char *direction)
{

  // direction left determines that for loop
  // will start from 0 to size of an array
  // shifting elements from bigger indexes to smaller
  if (direction == "left")
    {

      // first outer loop is responsible for executing
      // array shift n number of times in given direction
      // so if we wnat to rotate array left 4 times
      // we need to execute inner loop 4 times
      for (int i = 0; i < n; i++)
    	  {
          // temporary variable for storing first element
          int tmp = arr[0];

          // loop for shifting elements from larger indexes
          // to smaller ones
          for (int j = 1; j < size; j++)
            {
              // assign to smaller index value from larger index
              arr[j - 1] = arr[j];

              // when on last loop pass we need to
              // assign tmp variable to the last index
              // in our array
              if (j == size - 1)
                {
                  arr[j] = tmp;
                  break;
                }
            }
    	  }
    }

  // direction "right" determines that loop
  // starts from upper boundry of array and go to zero
  // shifting elements from smaller indexes to bigger
  else if (direction == "right")
    {

      // outer loop for executing inner loop n number of times
      for (int i = 0; i < n; i++)
        {
          // tmp variable with value of first index that will be
          // overwrittten
          int tmp = arr[size - 1];

          // inner loop that makes actual rotation and shifts
          // elements from smaller indexes to larger
          for (int j = size - 1; j >= 0; j--)
            {
              // assign to the larger index value from the smaller index
              arr[j] = arr[j - 2];


              // when on last loop pass we need to
              // assign tmp variable to the last index
              // in our array
              if (j == 0)
                {
                  arr[j] = tmp;
                  break;
                }
            }
        }

    }
}
