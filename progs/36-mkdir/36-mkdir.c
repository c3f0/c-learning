#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int main()
{
  
  char template[] = "tmp.dir.XXXXXX";
  char *dir_name = mkdtemp(template);

  printf("Dir name: %s\n", dir_name);
  if(dir_name == NULL)
    perror("Error");


  // remove dir after it was created
  /* if(rmdir(dir_name) == -1) */
  /* { */
  /*         perror("rmdir failed: "); */
  /*         return 0; */
  /* } */
  
  return 0;
}
