#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string s);

char rotate(char letterForRotate, int rotationCount);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    bool isDigit = only_digits(argv[1]);

    if (isDigit == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int rotationCount = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char rotate1 = rotate(plaintext[i], rotationCount);
        printf("%c", rotate1);
    }
    printf("\n");
    return 0;
}

bool only_digits(string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char letterForRotate, int rotationCount)
{
    int s = letterForRotate;
    if (isalpha(letterForRotate))
    {
        s = letterForRotate + rotationCount;

        if (islower(letterForRotate))
        {
            while (s > 122)
            {
                s -= 26;
            }
        }
        else if (isupper(letterForRotate))
        {
            while (s > 90)
            {
                s -= 26;
            }
        }
    }

    return s;
}