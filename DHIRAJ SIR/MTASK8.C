#include <stdio.h>

#define SIZE 10

struct Student {
    int sid;
    char name[30];
    float fees;
} s[SIZE];

void scanStudentDetails(void);
void displayStudentDetails(void);

int main(void)
{
    int choice;

    while (1) {
        printf("\n\n1--------Scan");
        printf("\n2--------Display");
        printf("\n3--------Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanStudentDetails();
                break;

            case 2:
                displayStudentDetails();
                break;

            case 3:
                printf("\nProgram exited.");
                return 0;

            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}

void scanStudentDetails(void)
{
    int i;

    for (i = 0; i < SIZE; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].sid);

        printf("Enter name: ");
        scanf("%29s", s[i].name);

        printf("Enter fees: ");
        scanf("%f", &s[i].fees);
    }
}

void displayStudentDetails(void)
{
    int i;

    printf("\nSID\tNAME\tFEES\n");

    for (i = 0; i < SIZE; i++) {
        printf("%d\t%s\t%.2f\n",
               s[i].sid,
               s[i].name,
               s[i].fees);
    }
}