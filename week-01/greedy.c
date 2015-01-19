#include <stdio.h>

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

  do
  {
    if (change >= 0.25)
    {
      change = change - 0.25;
      quarters++;
    }
  }
  while (change >= 0.25);
  do
  {
    if (change >= 0.10)
    {
      change = change - 0.10;
      dimes++;
    }
  }
  while (change >= 0.10);
  
  do
  {
    if (change >= 0.05)
    {
      change = change - 0.05;
      nickels++;
    }
  }
  while (change >= 0.05);

  do
  {
    if (change >= 0.01)
    {
      change = change - 0.01;
      pennies++;
    }
  }
  while (change >= 0.01);

  printf("%i quarters\n%i dimes\n%i nickels\n%i pennies\n", quarters, dimes, nickels, pennies);
}