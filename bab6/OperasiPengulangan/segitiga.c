#include <stdio.h>

int main()
{
    int i, j, tinggi;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n"); /* Pindah baris */
    }

    return 0;
}