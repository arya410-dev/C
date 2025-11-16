/*
 Program: Pyramid pattern
 Description: Prints a left-aligned pyramid with increasing stars:
 *
 * *
 * * *
 * * * *
*/

#include <stdio.h>

int main(void)
{
    const int rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}