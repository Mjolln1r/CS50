// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string converter);
int main(int argc, string argv[])
{
    if (argc > 2)
    {
        printf("Eror argc\n");
        return 1;
    }
    string s = replace(argv[1]);
    printf("%s\n", s);
}
string replace(string converter)
{
    for (int i = 0, len = strlen(converter); i < len; i++)
    {
        switch (converter[i])
        {
            case 'a':
                converter[i] = '6';
                break;

            case 'e':
                converter[i] = '3';
                break;

            case 'i':
                converter[i] = '1';
                break;

            case 'o':
                converter[i] = '0';
                break;
        }
    }
    return converter;
}
