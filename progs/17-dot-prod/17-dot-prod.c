#include <stdlib.h>
#include <stdio.h>

double dot_product(float v1[], float v2[], float result[], size_t length);


int
main ()
{
  float v1[] = {2, 3, 4};
  float v2[] = {3, 4, 5};
  double product;
  size_t length = sizeof(v1) / sizeof(v1[0]);
  float result[length];
    
  product = dot_product(v1, v2, result, length);
    
  for(int i = 0; i < length; i++)
    {
      printf("%0.lf + %0.lf = %.0lf\n", v1[i], v2[i], result[i]);
    }
    
  for(int i = 0; i < length; i++)
    {
      if(i + 1 == length)
        printf("%.0lf = ", result[i]);
      else
        printf("%0.lf + ", result[i]);
    }
  printf("%0.lf\n", product);
  return 0;
}

double 
dot_product(float v1[], float v2[], float result[], size_t length)
{
  double product;
  for(int i = 0; i < length; i++)
    {
      result[i] = v1[i] * v2[i];
      product += result[i];
    }
  return product;
}
