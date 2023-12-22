#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
  FILE *file = fopen("data.txt", "r");
  
  if(file == NULL)
    {
      fprintf(stderr, "Error: %d\n", errno);
      perror("Error msg");
      exit(1);
    }

  char c;
  while( (c = fgetc(file)) != EOF)
    {
      printf("%c", c);
    }
  printf("\n");

  // this loop won't produce any otput because file pointer
  // reached EOF and we need to rewind it!
  while( (c = fgetc(file)) != EOF)
    {
      printf("%c", c);
    }
  printf("\n");

  // rewind the file pointer back to the beginning of the file!
  rewind(file);

  // now we can read file again
  while( (c = fgetc(file)) != EOF)
    {
      printf("%c", c);
    }
  printf("\n");

  fclose(file);
  return 0;
}
