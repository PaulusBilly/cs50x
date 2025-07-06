#include <stdio.h>

int main()
{
  getString("What is your name: ");
}

char getString(char param[])
{
  char param[100];
  char str[100];
  printf("%s");
  scanf("%s", str);
  return str;
}