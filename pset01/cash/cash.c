#include <stdio.h>
#include <cs50.h>

int main() {
  int counter = 0;
  int owed;
  
  while (owed >= 0) {
    owed = get_int("Change owed: ");
    if (owed > 25) {
      owed -= 25;
      counter++;
    } else if (25 > owed <= 10) {
      owed -= 10;
      counter++;
    } else if (10 > owed <= 5) {
      owed -= 5;
      counter++;
    } else {
      owed -= 1;
      counter++;
    }

    printf("%i\n", counter);
  }
}

