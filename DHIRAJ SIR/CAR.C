#include <stdio.h>

struct car
{
    int carid;
    char name[30];
    char carmodel[30];
    float carrprice;
};

void scan(struct car c[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of car %d\n", i+1);

        printf("Enter Car ID: ");
        scanf("%d", &c[i].carid);

        printf("Enter Car Name: ");
        scanf("%s", c[i].name);

        printf("Enter Car Model: ");
        scanf("%s", c[i].carmodel);

        printf("Enter Car Price: ");
        scanf("%f", &c[i].carrprice);
    }
}

void display(struct car c[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nCar Details %d\n", i+1);

        printf("Car ID: %d\n", c[i].carid);
        printf("Car Name: %s\n", c[i].name);
        printf("Car Model: %s\n", c[i].carmodel);
        printf("Car Price: %.2f\n", c[i].carrprice);
    }
}

int main()
{
    struct car c[10];

    scan(c);

    display(c);

    return 0;
}