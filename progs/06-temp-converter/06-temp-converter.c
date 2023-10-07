#include <stdio.h>

double temp_convert(double temp, char type); 

int main()
{
  double temp_c, temp_f, new_temp; 
  temp_c = 232.78;
  temp_f = 451;
  
  new_temp = temp_convert(temp_f, 'f');
  printf("%.2ff is equal to %.2fc\n", temp_f, new_temp);

  new_temp = temp_convert(temp_c, 'c');
  printf("%.2fc is equal to %.2ff\n", temp_c, new_temp);
  
  return 0;
  
}

double temp_convert(double temp, char type)
{
    if(type == 'c') 
    {
        temp = (temp * 1.8) + 32;
        return temp;
    }
    else if(type == 'f') 
    {
        temp = (temp - 32) * 1 / 1.8;
        return temp;
    }
    
}
