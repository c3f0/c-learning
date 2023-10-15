#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_vowel_consonants(char *word, int size);

int
main ()
{
    char word[] = "abcdefghijlmnopkrstuvwxyz";
    int size = strlen(word);
    count_vowel_consonants(word, size);

    return 0;
}

void count_vowel_consonants(char *word, int size)
{
    int vowels, consonants;
    for(int i = 0; i < size; i++)
    {
      switch(tolower(word[i]))
        { 
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                consonants++;
                break;
        }
    }
        printf("Provided array of %d letters consists of %d vowels and %d consonants\n",
               size, vowels, consonants);
}
