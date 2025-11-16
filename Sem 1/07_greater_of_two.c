/*
 Program: Greater of two values
 Description: Reads two integers and prints which is greater (or if equal).
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter two integers (x y): ");
    if (scanf("%d %d", &x, &y) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (x > y)
        printf("%d is greater than %d\n", x, y);
    else if (y > x)
        printf("%d is greater than %d\n", y, x);
    else
        printf("%d and %d are equal\n", x, y);

    return 0;
}