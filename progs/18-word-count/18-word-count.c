#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count (char *string, char *phrase, int *false_count);

int
main ()
{
  char string[] = "in in in in in in";
  char phrase[] = "in";
  int false_count = 0;
  int *ptr_fc = &false_count;
  int result = word_count (string, phrase, ptr_fc);
  
  printf ("%d\n", result);
  printf ("false count: %d\n", false_count);
  return 0;
}

int
word_count (char *string, char *phrase, int *false_count)
{
  int s_len = strlen (string);
  int ph_len = strlen (phrase);
  int end = s_len - ph_len + 1;
  int count = 0;
  
    // 01 23 45 67 89 90
    // in in in in in in
    // in
  for (int i = 0; i < end; i++)
    {
      bool word_found = true;
      int j = 0;
      
      while (j < ph_len)
	  {
	  if (phrase[j] != string[i + j])
	    {
	      word_found = false;
	      // we could use: (*false_count)++;
	      // but not *flase_count++;
	      *flase_count +=1;
	      break;
	    }
	  j++;
	  }
	  
    if (word_found)
	count++;
    }
  return count;
}
