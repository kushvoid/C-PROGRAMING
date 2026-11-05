//  1  2  3  4  5
// 16 17 18 19  6
// 15 24 25 20  7
// 14 23 22 21  8
// 13 12 11 10  9

#include <stdio.h>

int main()
{
    int n = 5;
    int i, j, num = 1;

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while(top <= bottom && left <= right)
    {
        // Left to Right
        for(j = left; j <= right; j++)
        {
            printf("%3d", num++);
        }
        top++;

        // Top to Bottom
        for(i = top; i <= bottom; i++)
        {
            // Numbers are printed in traversal order,
            // but matrix positions are not stored.
        }

        right--;

        // Right to Left
        // Bottom to Top
        // Cannot directly print the required matrix
        // without storing values or using another method.
    }

}