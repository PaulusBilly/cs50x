#include <stdio.h>
#include <cs50.h>
#include <math.h>

int validate_luhn(long long card)
{
    int sum = 0;
    int i = 0; // pos from the right
    while (card > 0)
    {
        int digit = card % 10;
        if (i % 2 == 1)
        {
            int doubled = digit * 2;
            sum += doubled / 10 + doubled % 10;
        }
        else
        {
            sum += digit;
        }
        card /= 10;
        i++;
    }
    return sum % 10 == 0;
}

int length(long long card)
{
    int len = 0;
    while (card > 0)
    {
        card /= 10;
        len++;
    }
    return len;
}

int first_digit(long long card)
{
    while (card >= 10)
        card /= 10;
    return (int)card;
}

int first_two_digits(long long card)
{
    while (card >= 100)
        card /= 10;
    return (int)card;
}

void card_type(long long card)
{
    int len = length(card);
    int d1 = first_digit(card);
    int d2 = first_two_digits(card);

    if (!validate_luhn(card))
    {
        printf("INVALID\n");
        return;
    }

    if (len == 15 && (d2 == 34 || d2 == 37))
    {
        printf("AMEX\n");
    }
    else if (len == 16 && (d2 >= 51 && d2 <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((len == 13 || len == 16) && d1 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int main()
{
    long long card;
    do
    {
        card = get_long_long("Number: ");
    } while (card <= 0);

    card_type(card);
}
