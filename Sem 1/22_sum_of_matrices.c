/*
 Program: Sum of two matrices
 Description: Reads two matrices of same dimensions and prints their sum.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0)
        return 1;

    int **A = malloc(sizeof(int *) * r);
    int **B = malloc(sizeof(int *) * r);
    int **S = malloc(sizeof(int *) * r);
    if (!A || !B || !S)
        return 1;
    for (int i = 0; i < r; i++)
    {
        A[i] = malloc(sizeof(int) * c);
        B[i] = malloc(sizeof(int) * c);
        S[i] = malloc(sizeof(int) * c);
    }

    printf("Enter elements of matrix A (%dx%d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (%dx%d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    printf("Sum matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            S[i][j] = A[i][j] + B[i][j];
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        free(A[i]);
        free(B[i]);
        free(S[i]);
    }
    free(A);
    free(B);
    free(S);
    return 0;
}
