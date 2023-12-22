#include <stdio.h>
#include <stdbool.h>


int main()

{
  FILE *file;
  file = fopen("file.txt", "r");
  
  if(file == NULL)
    {
      printf("Error opening file.\n");
      return 1;
    }

  /* int c; */
  /* while(true) */
  /*   { */
  /*     c = fgetc(file); */

  /*     // if EOF break loop */
  /*     if(feof(file) || ferror(file)) break; */

  /*     // unget will move to where e is replace it with z and */
  /*     // continue loop */
  /*     if(c == 'e') ungetc('z', file); */
  /*     else printf("%c", c); */
            
  /*   } */

  int c;
  char op1[256];
  int i = 0;
  while(true)
    {
      c = fgetc(file);
      if(feof(file) || ferror(file)) break;
      if(c == '+')
        {
          ungetc(c, file);
          break;

        }
      else
        {
          op1[i] = c;
          i++;
        }
    }
  printf("i: %d\n", i);
  op1[i] = '\0';
  printf("op1: %s\n", op1);

  char rest[256];
  fgets(rest, 256, file);
  printf("rest: %s\n", rest);

  printf("\n");
  fclose(file);
         
  return 0;
}
