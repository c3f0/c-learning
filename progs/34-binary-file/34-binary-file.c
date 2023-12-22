  #include <stdio.h>
  #include <stdlib.h>
  #include <errno.h>

  int main()
  {
   int data[10];

   size_t size_data = sizeof(data) / sizeof(data[0]);

   for(int i = 0; i < size_data; i++)
     {
       data[i] = 1000000000 + i;
     }
   
   FILE *file_write;
   file_write = fopen("file.bin", "wb");
   
   if(file_write == NULL)
   {
       printf("Error: \n", errno);
       perror("Error msg");
   }

   // 1st arg data is a pointer that decayed from data[]
   fwrite(data, sizeof(data), 1, file_write);

   fclose(file_write);

   FILE *file_read;
   file_read = fopen("file.bin", "rb");
   
   if(file_read == NULL)
   {
       printf("Error: \n", errno);
       perror("Error msg");
   }

   int data_read[10];

   fread(data_read, sizeof(data_read), 1, file_read);
   fclose(file_read);

   size_t size_arr = sizeof(data_read) / sizeof(data_read[0]);

   for(int i = 0; i < size_arr; i++)
     {
       printf("%d\n", data_read[i]);
     }

   return 0;
  } 
