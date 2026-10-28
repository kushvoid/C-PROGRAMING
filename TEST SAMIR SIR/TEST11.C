#include<conio.h>
#include<stdio.h>
int main()
{
    char str[20];
    int len = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    while(str[len] != '\0')
    {
        len++;
    }
    
    printf("\nLength of the string is: %d", len);
    getch();
}