#include <cs50.h>
#include <stdio.h>

int meow(int count) {
  for (int i = 0; i < count; i++) {
    printf("meow\n");
  }
}

int main()
{
  int count = get_int("How many meows? ");
}
