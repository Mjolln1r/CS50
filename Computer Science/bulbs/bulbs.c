#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

void dec_bit(string text);

int main(void)
{
    string text1 = get_string("Message: ");

    dec_bit(text1);

    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {

        printf("\U0001F7E1");
    }
}

void dec_bit(string text)
{
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        int val = text[i];

        int binary[BITS_IN_BYTE];

        for (int base = 7; base >= 0; base--)
        {
            binary[base] = val % 2;
            val/=2;
        }

        for (int j = 0; j < 8; j++)
        {
            print_bulb(binary[j]);
        }
        printf("\n");
    }
}
