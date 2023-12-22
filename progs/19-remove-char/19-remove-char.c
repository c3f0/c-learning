#include <stdlib.h>
#include <stdio.h>

void remove_char(char *string, char r);

int
main ()
{
  char string[] = "ouowouo";
  char r = 'o';
  remove_char(string, r);
  printf("%s\n", string);
  return 0;
}

void remove_char(char *string, char r)
{
  int pos = 0;
  // the same as string[pos] != '\0'
  while(string[pos])
    {
      if(string[pos] == r)
        {
          
          int new_pos = pos;
          // the same as string[pos] != '\0'
          // this loop will shift all indexes to the left
          // by shift I mean copy value from the next index
          // to the current one
          // to get rid of found match 
          while(string[new_pos])
            {
              // EXAMPLE:
              // "oaob"
              // to index 0 we copy value from index 1
              // "aaob"
              // to index 1 we copy value from index 2
              // "aoob"
              // to index 2 we copy value from index 3
              // "aobb"
              // to index 3 we copy value from index 4 which is '\0' !!!
              string[new_pos] = string[new_pos + 1];
              new_pos++;
            }
        }
      // after we shifted to the left and our if condition fails eventually
      // we end up here to increment our position in the string
      // and begin whole process of checking and shifting afresh
      // until null terminator is reached
      else pos++;
    }
}
