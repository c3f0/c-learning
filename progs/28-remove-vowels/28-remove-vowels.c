#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void remove_vowels(char *str);

int main()
{

    char string[] = "There is no try and bou";
    remove_vowels(string);
    printf("%s\n", string);
    
    
    
return 0;
} 

void remove_vowels(char *str)
{
    int curr_pos = 0;
    int new_pos = 0; // 1
    
    // 0123\0
    // BCAD
    // BCD
    while(curr_pos < strlen(str))
    {
        if(!(toupper(str[curr_pos]) == 'A' || toupper(str[curr_pos]) == 'E' ||
             toupper(str[curr_pos]) == 'I' || toupper(str[curr_pos]) == 'O' ||
             toupper(str[curr_pos]) == 'U'))
        {
            str[new_pos] = str[curr_pos];
            new_pos++;
        }
        curr_pos++;
    }
    str[new_pos] = '\0';
    
}
