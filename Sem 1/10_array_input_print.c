/*
 Program: Array input and print
 Description: Reads N integers into an array and prints them.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Hardcoded example array (no user input). */
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}