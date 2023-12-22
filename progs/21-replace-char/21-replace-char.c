#include <stdlib.h>
#include <stdio.h>

void replace_char(char *string, char a, char b);

int
main ()
{
  char string[] = "boob";
  char a = 'b';
  char b = 'p';
  printf("%s\n", string);
  replace_char(string, a, b);
  printf("%s\n", string);
  return 0;
}

void replace_char(char *string, char a, char b)
{
    int i = 0;
    while(string[i])
    {
        if(string[i] == a)
        {
            string[i] = b;
        }
        i++;
    }
}
