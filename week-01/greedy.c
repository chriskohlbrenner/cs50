#include <stdio.h>
#include <math.h>

int main(void)
{
  float change;
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;
  do
  {
  printf("How much change are you owed? ");
  scanf("%f", &change);
  }
  while (change < 0);

  // handle rounding: https://cs50.harvard.edu/resources/cppreference.com/stdmath/round.html
  change = change * 100;
  int intChange = (int) round(change);

  do
  {
    if (intChange >= 25)
    {
      intChange = intChange - 25;
      quarters++;
    }
  }
  while (intChange >= 25);
  do
  {
    if (intChange >= 10)
    {
      intChange = intChange - 10;
      dimes++;
    }
  }
  while (intChange >= 10);
  
  do
  {
    if (intChange >= 05)
    {
      intChange = intChange - 05;
      nickels++;
    }
  }
  while (intChange >= 05);

  do
  {
    if (intChange >= 01)
    {
      intChange = intChange - 01;
      pennies++;
    }
  }
  while (intChange >= 01);

  printf("%i quarters\n%i dimes\n%i nickels\n%i pennies\n", quarters, dimes, nickels, pennies);
}