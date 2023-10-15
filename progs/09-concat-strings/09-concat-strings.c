#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat_string(char *str1, char *str2);

int
main ()
{
    char str1[] = "W białym płaszczu\n"
                  "z podbiciem koloru krwawnika\n" 
                  "posuwistym krokiem kawalerzysty\n"
                  "wczesnym rankiem czternastego dnia ";
    char str2[] = "wiosennego miesiąca nisan...\n";    

    char *s = concat_string(str1, str2);
    printf("%s\n", s);
    
    // always remember to free memory from heap
    free(s);
    
    return 0;
}

// this function:
// 1 - calculates memory required to concatinate 2 strings
// 2 - allocates space on the heap
// 3 - performs concatination
char *concat_string(char *str1, char *str2)
{
    int s1_length = strlen(str1);
    int s2_length = strlen(str2);
    
    // +1 because strlen doesn't include null terminator
    int size = s1_length + s2_length + 1;
    
    
    char *s = calloc(size, sizeof(char));
    
    // strlen starts indexing from 1
    // to put null terminetor back in its proper index
    // we need to substract -1
    s[size - 1] = '\0';
    
    for(int i = 0; i < s1_length; i++)
    {
        s[i] = str1[i];
    }
    
    for(int i = 0; i < s2_length; i++)
    {
        s[s1_length + i] = str2[i];
    }
    
    return s;
    
}
