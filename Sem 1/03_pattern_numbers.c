/*
 Program: Number pattern
 Description: Prints the pattern:
 1
 12
 123
 1234
*/

#include <stdio.h>

int main(void)
{
    const int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}