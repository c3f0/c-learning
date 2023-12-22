#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_postal_code(char postal_code[]);

int main()
{
  char code1[] = "L8k 4B6"; 
  char code2[] = "666 666"; 


  (is_postal_code(code1)) ? printf("Code: %s is valid\n", code1)
    : printf("Code: %s is invalid\n", code1);
  
  (is_postal_code(code2)) ? printf("Code: %s is valid\n", code2)
    : printf("Code: %s is invalid\n", code2);

  return 0;
}

bool
is_postal_code(char postal_code[])
{
  
  if(strlen(postal_code) != 7) return false;
  if(!isalpha(postal_code[0])) return false;
  if(!isdigit(postal_code[1])) return false;
  if(!isalpha(postal_code[2])) return false;
  if(!isspace(postal_code[3])) return false;
  if(!isdigit(postal_code[4])) return false;
  if(!isalpha(postal_code[5])) return false;
  if(!isdigit(postal_code[6])) return false;

  return true;
}
