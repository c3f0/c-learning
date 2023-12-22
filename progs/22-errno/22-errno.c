#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

// we can include string library to make
// error msg readable
#include <string.h>

// extern allows us to access
// and share between files special int
// from errno library
extern int errno;

int
main ()
{
  FILE *fh;
  printf("Errno after: %d\n", errno);
  fh = fopen("dne.txt", "r");
  
  if(fh == NULL)
    {
      printf("Errno after: %d\n", errno);

      // this is how we use string.h to print
      // verbose error msg
      printf("Error msg: %s\n", strerror(errno));

      // perror does similiar thing
      // it accepts string and as long as its
      // not blank it ads error msg to it after colon
      perror("Error msg using perror");

      // BEST PRACTICE is to put error msg to stderr
      // that way it can be redirected from the terminal
      fprintf(stderr, "Error msg: %s\n", strerror(errno));
    } else fclose(fh);

  return 0;
}
