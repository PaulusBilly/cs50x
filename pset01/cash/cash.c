#include <stdio.h>
#include <cs50.c>

int main() {
    int counter = 0;
    int owed;

    do {
        owed = get_int("Change owed: ");
    } while (owed <= 0);

    while (owed == 0) {
        if (owed >= 25) {
            counter++;
            owed -= 25;
        } else if (owed >= 10 && owed < 25) {
            counter++;
            owed -= 10;
        } else if (owed>= 5 && owed< 10) {
            counter++;
            owed -= 5;
        } else if (owed >= 1 && owed < 5) {
            counter ++;
            owed -= 1;
        }
    }

    printf("Counter = %i", counter);
}

