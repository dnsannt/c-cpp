#include <stdio.h>

int main()
{
    int i, j, tinggi, bil;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; i++)
    {
        bil = i;
        for (j = 1; j <= i; j++)
        {
            printf("%3d", bil);
            bil = bil + tinggi - j;
        }

        printf("\n"); /* Pindah baris */
    }

    return 0;
}