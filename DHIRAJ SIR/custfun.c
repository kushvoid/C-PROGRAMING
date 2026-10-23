/*
AUTHOR: kush
DOC: 22/10/26
OBJECTIVE: FUNCTION FOR CUSTOMER
*/

#include <stdio.h>
#include <conio.h>

int custid;
char custName[50];
float fees;

void scan(int *id, char name[], float *deposit);
void display(int id, char name[], float deposit);

void main()
{
    // clrscr();

    scan(&custid, custName, &fees);
    display(custid, custName, fees);

    getch();
}

void scan(int *id, char name[], float *deposit)
{
    printf("ENTER CUSTOMER ID: ");
    scanf("%d", id);

    printf("ENTER CUSTOMER NAME: ");
    scanf("%49s", name);

    printf("ENTER DEPOSIT: ");
    scanf("%f", deposit);
}

void display(int id, char name[], float deposit)
{
    printf("\n\nCUSTOMER ID: %d", id);
    printf("\nCUSTOMER NAME: %s", name);
    printf("\nDEPOSIT: %.2f\n", deposit);
}