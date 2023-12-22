#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void remove_vowels(char *str);

int main()
{

    char filename[100];
    printf("File: ");
    scanf("%s", filename);
    
    
    if(remove(filename) != 0)
    {
        fprintf(stderr, "Errno: %d\n", errno);
        perror("Error  msg");
    } else printf("%s deleted.\n", filename);
    
    
    
return 0;
} 
