#include <stdio.h>
#include <cs50.h>

int checksum(long card) {
    int sum = 0;
    int pos = 0;

    for (long n = card; n > 0; n /= 10, pos++) {
        int digit = n % 10;

        if (pos % 2 == 1) {
            int x = digit * 2;
            sum += (x > 9) ? x - 9 : x;
        } else {
            sum += digit;
        }
    }
    return sum;
}

int main() {
    long card = get_long("Number: ");
    checksum(card);
}
