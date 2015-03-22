#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <ctype.h>

void cipher(int key);

int main (int argc, char *argv[])
{
  int arg_length = strlen(argv[1]);
  int c;
  char low;

  for (int i = 0; i < arg_length; i++) {
    if (!isdigit(argv[1][i])) {
      printf("Character %d is NOT a digit. Enter digits for the cipher key.\n", i + 1);
      return 1;
      }
  }

  /* convert the character(s) to an integer */
  int k = atoi(argv[1]);
  cipher(k);

  return 0;
}

/* error checking with cmd line arguments */
int num_of_args(int argcount)
{
  // 2 args only
  if (argcount != 2)
  {
    printf("\nOnly enter 1 arguments.\n\n");
    return 1;
  }
  return 0;
}

void cipher(int key)
{
  // set max string length to 100
  char plain_text[100];

  fgets(plain_text, sizeof(plain_text), stdin);
  for (int i = 0; i < strlen(plain_text); i++)
  {
    if (islower(plain_text[i]))
    {
      char low = ((plain_text[i] - 'a' + key) % 26) + 'a'; 
      printf("%c", low);
    }
    else if(isupper(plain_text[i]))
    {
      char high = ((plain_text[i] - 'A' + key) % 26) + 'A';
      printf("%c", high);
    }
    else
      printf("%c", plain_text[i]);
  }
  printf("\n");
}
