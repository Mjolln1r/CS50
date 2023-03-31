#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long s = get_long("Number: ");
    long s1 = s;
    int answer = 0;
    int counter = 0;
    while (s > 0)
    {
        int temp = s % 10;
        if (counter % 2 == 0)
        {
            answer += temp;
        }
        else
        {
            temp *= 2;
            if (temp > 9)
            {
                answer += temp % 10;
                answer += temp / 10;
            }
            else
            {
                answer += temp;
            }
        }
        counter++;
        s /= 10;
    }

    if (answer % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    if (counter == 15)
    {
        int ans = s1 / 10000000000000;

        if (ans == 34 || ans == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (counter == 13)
    {
        int ans = s1 / 1000000000000;

        if (ans == 4)
        {
            printf("VISA\n");
        }
    }
    else if (counter == 16)
    {
        int ansMC = s1 / 100000000000000;

        int ansVisa = s1 / 1000000000000000;

        if (ansVisa == 4)
        {
            printf("VISA\n");
        }
        else if (ansMC >= 51 && ansMC <= 55)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
