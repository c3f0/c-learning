#include <stdio.h>
// theses values have assigned indexes starting from 0
// we can also override these values
enum Day {Monday, Tuesday, Wednesday, Thursday, Friday = 9, Saturday, Sunday};

// we can use typedef with enums to use only 'Button' as a syntax for initiation
typedef enum button {ON, OFF} Button;

// enums can be function return types and parameters
Button press(Button current);

// print current button state
void print_button(Button current);

int main(void)
{
  enum Day today = Tuesday; // int 1 
  enum Day yesterday = Monday; // int 0
  enum Day tommorow = Wednesday; // int 2


  printf("Yesterday: %d\n", yesterday);
  printf("Today: %d\n", today);
  printf("Tommorow: %d\n", tommorow);

  Button power = ON;

  print_button(power);
  power = press(power);
  print_button(power);
  power = press(power);
  power = press(power);
  print_button(power);

  return 0;
}

Button press(Button current)
{
  if(currnet == ON) return OFF;
  else return ON;
}

void print_button(Button current)
{
  if(current == ON) printf("ON\n");
  else if( current == OFF) printf("OFF\n");
}
