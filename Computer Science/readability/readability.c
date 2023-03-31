#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    string word1 = get_string("Text: ");

    int score1 = count_letters(word1);
    printf("%i letters\n", score1);

    int score2 = count_words(word1);
    printf("%i words\n", score2);

    int score3 = count_sentences(word1);
    printf("%i sentences\n", score3);

    double L = (double) score1 / (double) score2 * 100;


    double S = (double) score3 / (double)score2 * 100;

    int score4 = round(0.0588 * L - 0.296 * S - 15.8);

    if (score4 >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (score4 < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", score4);
    }
}
int count_letters(string text)
{
    int n = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            n++;
        }
    }
    return n;
}
int count_words(string text)
{
    int n = 1;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            n++;
        }
    }
    return n;
}

int count_sentences(string text)
{
    int n = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            n++;
        }
    }
    return n;
}