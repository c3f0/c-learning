#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void remove_vowels(char *str);

int main()
{

  char curr_filename[100], new_filename[100];

    printf("Type file you want to rename: ");
    scanf("%s", curr_filename);


    printf("Type new name for it: ");
    scanf("%s", new_filename);
    
    int result = rename(curr_filename, new_filename);
    if(result != 0)
    {
        fprintf(stderr, "Errno: %d\n", errno);
        perror("Error  msg");
    } else printf("%s renamed to %s.\n", curr_filename, new_filename);
    
    
    
return 0;
} 
