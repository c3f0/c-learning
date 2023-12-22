#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main()
{
  if (truncate("testfile.txt", 10) == -1)
    {
      printf("Error code: %d\n", errno);
      perror("Error");
    }

  return 0;

}
