#include <stdio.h>

int main()
{
    int i, j, jum_baris, jum_kolom, bil;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &jum_baris);

    printf("Masukkan jumlah kolom: ");
    scanf("%d", &jum_kolom);

    for (i = jum_baris; i >= 1; i--)
    {
        bil = i;
        for (j = 1; j <= jum_kolom; j++)
        {
            printf("%3d", bil);
            bil = bil + jum_baris;
        }

        printf("\n"); /* Pindah baris */
    }

    return 0;
}