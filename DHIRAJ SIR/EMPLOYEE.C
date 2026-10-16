// Create an employee structure with members eId, eName, gSalary, tAllowance, nSalary, tax.
// Create a program to scan 5 employees' data and display 5 employees' data also.
// Calculate the nSalary as:
// nSalary = gSalary - tax + tAllowance
#include <stdio.h>
#include <conio.h>
#define SIZE 2

struct employee{
    int eId;
    char eName[50];
    float gSalary;
    float tAllowance;
    float nSalary;
    float tax;
};

void scanEmpDetails(struct employee emp[]);
void printEmpDetails(struct employee emp[]);

int main() {
    struct employee emp[SIZE];
    int choice;
    // clrscr();
    do {
        printf("\n1-----------Scan Employee Details");
        printf("\n2-----------Print Employee Details");
        printf("\n3-----------Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanEmpDetails(emp);
                break;
            case 2:
                printEmpDetails(emp);
                break;
            case 3:
                printf("Exiting the program...");
                break;
            default:
                printf("Invalid choice. Please try again.");
        }
    } while (choice != 3);
    // getch();
    return 0;
}

void scanEmpDetails(struct employee emp[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].eId);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].eName);
        printf("Enter Gross Salary: ");
        scanf("%f", &emp[i].gSalary);
        printf("Enter Tax: ");
        scanf("%f", &emp[i].tax);
        printf("Enter Total Allowance: ");
        scanf("%f", &emp[i].tAllowance);
        
        // Calculate Net Salary
        emp[i].nSalary = emp[i].gSalary - emp[i].tax + emp[i].tAllowance;
    }
}

void printEmpDetails(struct employee emp[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Employee %d Details:\n", i + 1);
        printf("Employee ID: %d\n", emp[i].eId);
        printf("Employee Name: %s\n", emp[i].eName);
        printf("Gross Salary: %.2f\n", emp[i].gSalary);
        printf("Tax: %.2f\n", emp[i].tax);
        printf("Total Allowance: %.2f\n", emp[i].tAllowance);
        printf("Net Salary: %.2f\n", emp[i].nSalary);
        printf("-------------------------\n");
        // getch();
    }
}