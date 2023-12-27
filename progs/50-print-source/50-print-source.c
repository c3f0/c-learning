#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *file;
  char c;

  // __FILE__ is a preprocessor macro that will be set to the name of the source
  // code file, and we use this to open the source code file for reading
  file = fopen(__FILE__, "r");


  // read in each char of the file, store it into c and then print it, until 
  // the char is set to EOF by getc() which signifies the End Of File
  while ( (c = getc(file)) != EOF )
    putchar(c);

  fclose(file);
  return 0;
}
