#include <stdio.h>
int main()
{
    char a[50] = "Royal Technosoft 123";
    char *ptr = a;
    int small = 0, capital = 0, spaces = 0, digits = 0;
    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            small++;
        }
        else if (*ptr >= 'A' && *ptr <= 'Z')
        {
            capital++;
        }
        else if (*ptr == ' ')
        {
            spaces++;
        }
        else if (*ptr >= '0' && *ptr <= '9')
        {
            digits++;
        }
        ptr++;
    }
    printf("Small letters: %d\n", small);
    printf("Capital letters: %d\n", capital);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
