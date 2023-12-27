#include <stdio.h>

void merge(int a[], size_t m, int b[], size_t n, int r[]);

int main(void) 
{
  // a and b are the sorted arrays, and we'll store the merged result into r
  int a[] = {1,3,5,7,9,10,11};
  int b[] = {2,4,5,6,8};
  
  size_t length_a = sizeof(a) / sizeof(a[0]);
  printf("length a: %ld\n", length_a);
  size_t length_b = sizeof(b) / sizeof(b[0]);
  printf("length b: %ld\n", length_b);
  int length_r = length_a + length_b;
  
  int r[length_r];

  merge(a, length_a, b, length_b, r);

  // output the result
  for (int i = 0; i < length_r; i++)
    printf("r[%d] = %d\n", i, r[i]);

  return 0;
}
  // int a[] = {1,3,5,7,9,10,11};
  // int b[] = {2,4,5,6,8};
void merge(int a[], size_t m, int b[], size_t n, int r[])
{
    // counter variables for:
    //  a, b, r
    int i, j, k = 0;
    
    while ( i < m && j < n)
    {
        if (a[i] < b[j])
        {
            r[k] = a[i];
            k++;
            i++;
        }
        else
        {
            r[k] = b[j];
            k++;
            j++;
        }
    }
    
    while ( i < m )
    {
        r[k] = a[i];
        k++;
        i++;
    }
    
    while ( j < n )
    {
        r[k] = b[i];
        k++;
