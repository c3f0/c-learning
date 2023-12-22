#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int convert_bin_dec(char *string);

int
main ()
{
  char bin[] = "10101";
  int total = convert_bin_dec(bin);
  printf("%d\n", total);
  return 0;
}

int convert_bin_dec(char *string)
{
  // Example of binary number conversion logic/math
  //
  // 10101 binary -> 21 decimal
  // 
  // 1    0    1    0    1 
  // 2^4  2^3  2^2  2^1  2^0
  // 16 + 0 +  4 +  0 +  1
  // = 21
  //
  int slen = strlen(string) - 1;
  int total = 0;
  int dec_val = 1;
  while(slen >= 0)
    {
      if(string[slen] == '1') total += dec_val;
      dec_val *= 2;
      slen--;
    }

  // for loop version
  /* for(int i = slen; i >= 0; i--) */
  /*   { */
  /*     if(string[i] == '1') total += dec_val; */
  /*     dec_val *= 2; */
  /*   } */

  return total;
}
