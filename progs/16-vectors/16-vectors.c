#include <stdlib.h>
#include <stdio.h>

void vector_add(float v1[], float v2[], float result[], size_t length);


int
main ()
{
  float v1[] = {1.1, 2.2, 3.3};
  float v2[] = {1.3, 2.2, 3.1};
  size_t length = sizeof(v1) / sizeof(v1[0]);
  float result[length];
    
  vector_add(v1, v2, result, length);
    
  for(int i = 0; i < length; i++)
    {
      printf("%.2lf, ", result[i]);
            
    }
  return 0;
}

void vector_add(float v1[], float v2[], float result[], size_t length)
{
    
  for(int i = 0; i < length; i++)
    {
      result[i] = v1[i] + v2[i];
            
    }
}
