/* Penjumlahan matriks */
#include <stdio.h>

int main()
{
    int a[2][2] = {{6, 7}, {5, 8}};
    int b[2][2] = {{1, 3}, {4, -1}};
    int c[2][2];
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            c[i][j] = a[i][j] + b[i][j];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%4d", c[i][j]);
        printf("\n"); /* Pindah baris */
    }
    return 0;
}