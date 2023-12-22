  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>


  int main()
  {
    FILE *file;
    file = fopen("file.txt", "w");
    
    if(file == NULL)
    {
    printf("Error while loading a file.\n");
    return 1;
    }
    
    fprintf(file, "123457890\n");

    fprintf(file, "abcdefghi\n");

    // 2nd arg is offset of characters inside a file
    // SEEK_SET - sets file pointer to the beginning of a file
    // SEEK_CUR - sets pointer to the current location in the file
    // SEEK_END - sets pointer to the end of the file
    fseek(file, 10, SEEK_SET);

    fprintf(file, "ABC");
    
    fseek(file, 0, SEEK_CUR);

    fprintf(file, "D");

    fseek(file, -4, SEEK_END);
    fprintf(file, "GHIJKLMOPQRSTUVWXYZ\n");

    // fseek 10 will return 0 because it points to place
    // after the EOF
    if(fseek(file, 10, SEEK_END) == 0)
      {
        printf("Seek failed!\n");
      } else printf("Seek DID NOT failed!\n");

    fclose(file);

    
    return 0;
  } 
