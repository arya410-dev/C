/*
 Program: Array input and print
 Description: Reads N integers into an array and prints them.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("How many elements? ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = malloc(sizeof(int) * n);
    if (!arr)
        return 1;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}