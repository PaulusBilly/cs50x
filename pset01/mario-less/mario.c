#include <stdio.h>
#include <cs50.h>

int main() {
  int height;
  int length;
  do{
    height = get_int("Height: ");
    length = height;
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < length; j++) {
        if (j < (length - i) - 1) {
          printf(" ");
        } else {
          printf("#");
        }
      }
      printf("\n");
    }
  } while (!(height > 0));
}
