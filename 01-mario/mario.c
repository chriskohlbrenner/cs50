#include <stdio.h>

int main(void)
{
  int height;
  do
  {
  printf("Enter the height: ");
  scanf("%d", &height);
  }
  while (height < 1 || height > 23);
  height = height + 1;
  for (int i = 0; i < height; ++i)
  {
    for (int spaces = 0; spaces < height - i; ++spaces)
    {
      printf(" ");
    }
    for (int hashes = 0; hashes < i; ++hashes)
    {
      printf("#");
    }
    printf("\n");
  }
}