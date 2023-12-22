#include <stdio.h>
#include <stdbool.h>

void dump_file(FILE *file);

int main()
{
  FILE *file_read;
  FILE *file_write;
  file_read = fopen("test2.txt", "r");
  file_write = fopen("test2.txt", "w");

  if(file_read == NULL || file_write == NULL)
    {
      printf("Error opening file(s).\n");
      return 1;
    }

  fputc('w', file_write);
  fputc('x', file_write);
  fclose(file_write);

  dump_file(file_read);
  dump_file(file_read);

  FILE *file_append;
  file_append = fopen("test2.txt", "a");

  if(file_read == NULL || file_append == NULL)
    {
      printf("Error opening file(s).\n");
      return 1;
    }

  fputc('y', file_append);
  fputc('z', file_append);
  fclose(file_append);

  clearerr(file_read);
  dump_file(file_read);

  fclose(file_read);
  
  return 0;
}

void dump_file(FILE *file)
{
  int c;
  while(true)
    {
      c = fgetc(file);
      if(feof(file) || ferror(file)) break;
      printf("%c\n", c); 
    }
  printf("File Dump Complete\n");

}
