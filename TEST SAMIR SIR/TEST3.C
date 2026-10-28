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
