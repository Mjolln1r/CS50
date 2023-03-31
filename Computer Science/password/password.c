// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool isUpper = false;
    bool isSymbol = false;
    bool isDigit = false;
    bool isLower = false;
    for (int i = 0, len = strlen(password); i < len; i++)
    {
        char c = password[i];
        if (isupper(c) && !isUpper)
        {
            isUpper = true;
        }
        else if (isdigit(c) && !isDigit)
        {
            isDigit = true;
        }
        else if (islower(c) && !isLower)
        {
            isLower = true;
        }
        else if ((c > 32 && c < 48) || (c > 57 && c < 64) || (c > 90 && c < 97) || (c > 122 && c < 127))
        {
            isSymbol = true;
        }
    }
    if (isLower && isUpper && isSymbol && isDigit)
    {
        return true;
    }
    else
    {
        return false;
    }
}
