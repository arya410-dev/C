/*
 Program: Smaller of two values
 Description: Reads two integers and prints which is smaller (or if equal).
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (a < b)
        printf("%d is smaller than %d\n", a, b);
    else if (b < a)
        printf("%d is smaller than %d\n", b, a);
    else
        printf("%d and %d are equal\n", a, b);

    return 0;
}