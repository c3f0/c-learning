#include <stdio.h>
#include <stdlib.h>

void f();
void log_message(char *message);

int main()
{
  f();
  f();
  f();
  f();
  log_message("read data");
  log_message("update data");
  log_message("delete data");
        
  return 0;
}

void f()
{
  // intitialization to 0 occurs only once!
  static int calls = 0;
  // incrementation persists while program is running
  calls++;
  printf("%d\n", calls);
}

void log_message(char *message)
{
  static int total = 0;
  total++;

  // *if file doesn't exist it is created
  FILE *logfile = fopen("log.txt", "a");

  // if fopen returns NULL means it coudn't open the file
  // condition: write only if fopen will open file correctly
  if (logfile != NULL)
    {
      fprintf(logfile, "log %d: %s\n", total, message);
      fclose(logfile);
    }

}
