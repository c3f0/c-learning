#include <stdio.h>
#include <string.h>

int is_palindrome(char *word, int size, int flag);

int main()
{
  int flag, letters;
  char word[100];

  printf("Enter a word to check if it is a palindrome:\n");
  scanf("%s", word);
  int size = strlen(word);
 
  flag = is_palindrome(word, size, flag);
  
  if(!flag) printf("Word %s is not a palindrome\n", word);
  else printf("Word %s is a palindrome\n", word);

  return 0;
}

int is_palindrome(char *word, int size, int flag)
{
  for(int i = 0; i < size / 2; i++)
    {
      if(word[i] != word[(size - 1) - i])
        {
          flag = 0;
          break;
        }
      else if(word[i] == word[(size - 1) - i])
        {
          flag = 1;
          continue;
        }
    }

  return flag;
}
