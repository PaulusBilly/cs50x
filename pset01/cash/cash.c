#include <stdio.h>
#include <cs50.c>

int main() {
    int owed;
    int counter = 0;

    do {
        owed = get_int("Change owed: ");
    } while (owed < 0);

    while (owed >= 25) {
        owed -= 25;
        counter++;
    }

    while (owed >= 10) {
        owed -= 10;
        counter++;
    }

    while (owed >= 5) {
        owed -= 5;
        counter++;
    }

    while (owed >= 1) {
        owed -= 1;
        counter++;
    }

    printf("%i\n", counter);
}

