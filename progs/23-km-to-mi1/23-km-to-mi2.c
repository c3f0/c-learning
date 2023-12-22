#include <stdio.h>
#include <stdarg.h>

int convert_km(double num_args, ...);

int
main ()
{
  int result = convert_km(5, 1.4, 2.7, 3.9, 4.2, 5.5);
  return 0;
}

int convert_km(double num_args, ...)
{
  va_list args;
  va_start(args, num_args);

  double miles = 1.609344;
  double result = 0;
    
  for(int i = 0; i < num_args; i++)
    {
        
      double x = va_arg(args, double);
      result = x * miles;
      printf("%.2lfkm = %.2lfmi\n",x , result);
    }
    
  va_end(args);

  return 0;
}
