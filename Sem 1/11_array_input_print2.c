/*
 Program: Array input and print (alternate)
 Description: Reads N integers into an array and prints them (alternate implementation).
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

    int *arr = malloc(sizeof(int) * n);
    if (!arr)
        return 1;

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    free(arr);
    return 0;
}