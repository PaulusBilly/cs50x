#include <stdio.h>
#include <cs50.h>

int main() {
  int height;
  int length;
  do {
    height = get_int("Height: ");
    length = height * 2;
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < length + 1; j++) {
        if (j == (length / 2)) {
          printf(" ");
          continue;
        }

        if ((j < (length/2 - i) - 1) || (j > (length/2 + i) + 1)) {

          printf(" ");
        } else {
          printf("#");
        }
      }
      printf("\n");
    }
  } while (!(height > 0));
}
