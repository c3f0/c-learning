  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
    // Dynamically allocate two char arrays on the heap able to store 5 chars.
    // It is not at all guaranteed to be this way, but because all this program
    // does is allocate two char arrays on the heap, on at least some systems
    // (compilers/etc.) the blocks of memory will likely be next to each other 
    // on the heap with 'next' following 'buffer'.
    //
    char *buffer = malloc(sizeof(char) * 5);
    char *next = malloc(sizeof(char) * 5);

    // prompt the user to enter a string 
    printf("Enter: ");

    // with gets we can easily cause buffer overflow
    // gets(buffer);

    // we should use fgets instead and provide stdin as an argument
    // first arg is our pointer to buffer on heap
    // second arg is our fail switch
    // third is file or standard input
    fgets(buffer, 5, stdin);
    printf("String: %s\n", buffer);
    // if we provide more characters to first buffer, they do not disapear from stdin
    // and we can write them to the second (next) buffer
    fgets(next, 5, stdin);
    printf("Next: %s\n", next);

    free(buffer);
    free(next);

    return 0;
  }
