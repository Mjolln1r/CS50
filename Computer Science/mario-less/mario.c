#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int m;
    do
    {
        m = get_int("Height: ");
    }
    while (m < 1 || m > 8);
    for (int i = 1; i <= m; i++)
    {
        for (int n = m - i; n > 0; n--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}