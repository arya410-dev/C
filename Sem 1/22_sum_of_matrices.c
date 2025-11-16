/*
 Program: Sum of two matrices
 Description: Reads two matrices of same dimensions and prints their sum.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Hardcoded example matrices (no runtime input). */
    int r = 2, c = 3;

    int A_vals[] = {1, 2, 3, 4, 5, 6};
    int B_vals[] = {6, 5, 4, 3, 2, 1};

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

    /* populate matrices row-wise */
    for (int i = 0, k = 0; i < r; i++)
        for (int j = 0; j < c; j++, k++)
            A[i][j] = A_vals[k];

    for (int i = 0, k = 0; i < r; i++)
        for (int j = 0; j < c; j++, k++)
            B[i][j] = B_vals[k];

    printf("Matrix A:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

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
