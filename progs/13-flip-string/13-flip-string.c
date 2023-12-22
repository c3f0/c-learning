#include <stdio.h>
#include <string.h>
#include <ctype.h>

void flip_string (char *str);

int
main ()
{
  char s[] = "tAtoOs mUsT hAvE a MeAnInG!!!";
  printf("%s\n", s);

  flip_string(s);
  printf("%s\n", s);

  return 0;
}

void
flip_string (char *str)
{
  int len = strlen(str);
  for (int i = 0; i < len; i++)
    {
      if (islower(str[i]))
        {
          str[i] = toupper(str[i]);
        }
      else if(!islower(str[i]))
        {
          str[i] = tolower(str[i]);
        }
    }
}
