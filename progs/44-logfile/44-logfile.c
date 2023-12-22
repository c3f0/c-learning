#include <stdio.h>
#include <stdlib.h>

void logger(char *msg, char *src, int line, char *date, char *time);
int main()
{
    /* // __FILE__ is predefined macro with value of a filename */
    /* printf("Length: %s\n", __FILE__); */
    /* // __DATE__ is predefined macro with value of a date of compilation */
    /* printf("Date %s\n", __DATE__); */
    /* // __TIME__ is predefined macro with value of a time of compilation */
    /* printf("Time %s\n", __TIME__); */
    /* // __LINE__ is predefined macro with value of a line in source code */
    /* // where it occurs */
    /* printf("Line %d\n", __LINE__); */
    /* // __STDC__ is predefined macro with value of 1 if our code conforms */
    /* // to ANSI C standard */
    /* printf("ANSI %d\n", __STDC__); */
    
    /* // this predefinded macros are perfect for logging execution of a program */

  // predefined date and time arent very usefull in this case
  // because they don't thell us at what time something happend
  // but at what time whole program was compiled!
  logger("task 1 done", __FILE__, __LINE__, __DATE__, __TIME__);




  logger("task 2 done", __FILE__, __LINE__, __DATE__, __TIME__);
    
    
  return 0;
}

void logger(char *msg, char *src, int line, char *date, char *time)
{
    FILE *file;
    file = fopen("log.txt", "a");
    if (file == NULL)
    {
        printf("Error opening log file");
        exit(1);
    }
    fprintf(file, "%s:%d:%s:%s:%s\n", src, line, msg, date, time);
    fclose(file);
}
