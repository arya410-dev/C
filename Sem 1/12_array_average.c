/*
 Program: Array average
 Description: Calculates the average of N numbers entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid number.\n");
        return 1;
    }

    double *vals = malloc(sizeof(double) * n);
    if (!vals)
        return 1;

    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        if (scanf("%lf", &vals[i]) != 1)
        {
            printf("Invalid input.\n");
            free(vals);
            return 1;
        }
        sum += vals[i];
    }

    printf("Average = %.6g\n", sum / n);
    free(vals);
    return 0;
}
