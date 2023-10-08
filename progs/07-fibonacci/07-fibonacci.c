#include <stdio.h>

void fibonacci (int a, int b, int arr[], size_t size);

int
main ()
{
  int term1, term2, next_term, n, counter;
  term1 = 0;
  term2 = 1;
  n = 19;
  counter = 1;

  printf ("%d, %d, ", term1, term2);
  next_term = term1 + term2;
  while (counter < n)
    {
      if (counter + 1 == n)
        {
          printf ("%d", next_term);
        }
      else
        {
          printf ("%d, ", next_term);
          term1 = term2;
          term2 = next_term;
          next_term = term1 + term2;
        }
      counter++;
    }

  return 0;

}
