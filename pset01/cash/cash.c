#include <stdio.h>
#include <cs50.c>

int main() {
    int owed;

    do {
        owed = get_int("Change owed: ");
    } while (owed < 0);

    int coins[] = {25, 10, 5, 1};
    int coins_length = sizeof(coins) / sizeof(coins[0]);
    int counter = 0;

    for (int i = 0; i < coins_length; i++) {
        int coin = coins[i];
        while (owed >= coin) {
            owed -= coin;
            counter++;
        }
    }

    printf("%i\n", counter);
}

