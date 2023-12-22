#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

FILE *log_file;
int incidents = 0;

void* logger()
{
  while(true)
    {
      time_t current_time;
      time(&current_time);

      struct tm *tm = localtime(&current_time);

      char timestamp[256];

      strftime(timestamp, 256, "%x@%H:%M:%S", tm);

      fprintf(log_file, "%s: %d\n", timestamp, incidents);
      sleep(1);
    }

  return NULL;
}

int main()
{

  log_file = fopen("log.file", "w");
  if (log_file == NULL)
    {
      printf("Error opening file.\n");
      return 1;
    }
  
  pthread_t thread;
  int return_value = 0;

  return_value = pthread_create(&thread, NULL, &logger, NULL);
  if(return_value != 0) return 1;

  return_value = pthread_detach(thread);

  int input = 0;
  do
    {
      printf("Enter -1 to quit.\n");
      printf("New incidents: ");
      scanf("%d", &input);

      if(input != -1) incidents += input;
    } while (input != -1);
  
  fclose(log_file);
  
  return 0; 
}
