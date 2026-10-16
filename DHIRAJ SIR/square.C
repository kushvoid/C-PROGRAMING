#include <stdio.h>
#define SIZE 20

int main()
{
    int a[SIZE], i, j, temp, key;
    int low, high, mid, found = -1;

    // Input array elements
    for(i = 0; i < SIZE; i++)
    {
        a[i] = 20 - i;
        printf("Value of a[%d] %d\n", i, a[i]);
    }

    // Print square of array elements
    printf("\nSquare of array elements:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d\t", a[i] * a[i]);

        if(i == 9)
            printf("\n");
    }

    // Calculate square of array elements
    for(i = 0; i < SIZE; i++)
    {
        a[i] = a[i] * a[i];
    }

    // Bubble sort in ascending order
    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = 0; j < SIZE - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted series
    printf("\n\n----------Bubble sorted series----------\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d\t", a[i]);

        if(i == 9)
            printf("\n");
    }

    // Binary search
    printf("\n\n----------Binary Search----------\n");
    printf("Enter the searching element: ");
    scanf("%d", &key);

    low = 0;
    high = SIZE - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = mid;
            break;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Display search result
    if(found != -1)
    {
        printf("Searching element %d is found at %d index", key, found);
    }
    else
    {
        printf("Searching element %d is not found", key);
    }

    return 0;
}