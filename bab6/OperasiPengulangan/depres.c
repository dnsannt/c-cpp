#include <stdio.h>

int main()
{
    long int biaya;
    int i, jum, tahun;
    double depresiasi;

    printf("Biaya: ");
    scanf("%ld", &biaya);

    printf("Tahun: ");
    scanf("%d", &tahun);

    jum = tahun * (tahun + 1) / 2;

    for (i = 1; i <= tahun; i++)
    {
        depresiasi = (tahun + 1.0 - i) / jum * biaya;
        printf("%2d %.0lf\n", i, depresiasi);
    }

    return 0;
}