#include <stdio.h>

#define SIZE 5

struct Faculty
{
    int facultyid;
    char name[30];
    float facultysalary;
} f[SIZE];

void scan();
void display();
int search(int id);
void displayParticular(int index);
void update(int index);

int main()
{
    int choice, id, index;

    while (1)
    {
        printf("\n1. Scan");
        printf("\n2. Display");
        printf("\n3. Search");
        printf("\n4. Update");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scan();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("\nEnter Faculty ID to search: ");
                scanf("%d", &id);

                index = search(id);

                if (index == -1)
                    printf("Record not found!");
                else
                    displayParticular(index);
                break;

            case 4:
                printf("\nEnter Faculty ID to update: ");
                scanf("%d", &id);

                index = search(id);

                if (index == -1)
                    printf("Record not found!");
                else
                    update(index);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!");
        }
    }
}

void scan()
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter Faculty ID: ");
        scanf("%d", &f[i].facultyid);

        printf("Enter Name: ");
        scanf(" %29[^\n]", f[i].name);

        printf("Enter Salary: ");
        scanf("%f", &f[i].facultysalary);
    }
}

void display()
{
    int i;

    printf("\nID\tName\t\tSalary\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               f[i].facultyid,
               f[i].name,
               f[i].facultysalary);
    }
}

int search(int id)
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (f[i].facultyid == id)
            return i;
    }

    return -1;
}

void displayParticular(int i)
{
    printf("\nFaculty ID: %d", f[i].facultyid);
    printf("\nName: %s", f[i].name);
    printf("\nSalary: %.2f\n", f[i].facultysalary);
}

void update(int i)
{
    printf("\nEnter new Name: ");
    scanf(" %29[^\n]", f[i].name);

    printf("Enter new Salary: ");
    scanf("%f", &f[i].facultysalary);

    printf("\nUpdated Details:\n");
    displayParticular(i);
}