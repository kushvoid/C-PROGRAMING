//Q-1//
#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}


//Q-2//

#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}



//Q-3//

#include <stdio.h>

int main() {
    int num = 123;
    int sum = 0;
    int remainder;

    printf("Initial number: %d\n", num);

    
    while (num != 0) {
        remainder = num % 10; 
        sum = sum + remainder;
        num = num / 10;        
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}


//Q-4//

#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }   
}


//Q-5//


#include<stdio.h>
 int main()
{
    int i, j, number = 1;
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", number++);
        }
        printf("\n");
    }
}


//Q-6//


#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


//Q-7//


#include<stdio.h>
int main(){
    int n[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\n", n[i]);
    }
}


//Q-8//

#include<stdio.h>
int main(){
    int n[5];
    for(int i=0;i<5;i++){
        printf("Enter value of n[%d]: ",i);
        scanf("%d", &n[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n", n[i]);
    }
}


//Q-9//


#include<stdio.h>
int main()
{
    int arr[5];
    int i, sum = 0;
    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum of array elements is: %d", sum);
    return 0;
}


//Q-10//

#include<stdio.h>
int main()
{
    int a[5],max=0;
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter Value for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nMax of 5 elements of Array is: %d",max);
}


//Q-11//

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
    return 0;
}