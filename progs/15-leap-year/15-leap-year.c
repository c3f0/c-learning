#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int *year);

int
main ()
{

  int year;
  bool leap;
  printf("Enter a year to check if it is a leap year "
         "or a common year: \n");
  scanf("%d", &year);
  leap = is_leap_year(&year);

  if(leap) printf("It is leap year.\n");
  else printf("It is a common year.\n");
  return 0;
}

bool
is_leap_year(int *year)
{
  if(*year % 4 != 0) return false;
  else if(*year % 100 != 0) return true;
  else if(*year % 400 != 0) return false;
  else return true;
}
