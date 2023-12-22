#include <stdio.h>
#include <errno.h>

int main(void)
{
  FILE *file;

  file = fopen("file.txt", "w");

  if(file == NULL)
    {
      printf("Error code: \n", errno);
      perror("Error");

      // return error to the terminal
      return 1;
    }

  fputs("abc\n", file);
  fputs("123", file);
  fputs("456\n", file);

  // we can also write string literals with fputs
  char string[] = "test string\n";
  fputs(string, file);

  // we can write to the standard output
  fputs(string, stdout);


  // fputs() could fail for some reasons, for example if we try to write a 
  // string to a file that was opened for reading with "r" as the mode instead 
  // of something like "w" or "a".  Here fputs() will fail because we try to 
  // write to the standard INPUT stream stdin.  When fputs() fails it will 
  // return EOF, and so we check for this.
  if (fputs("writing to stdin", stdin) == EOF)
    {
      printf("fputs() error\n", errno);
      perror("Error");

      return 1;

    }
  fclose(file);

  return 0;

}
