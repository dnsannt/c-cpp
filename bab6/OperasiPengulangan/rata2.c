#include <stdio.h>

int main()
{
    int n, pencacah;

    double bil, jum, rata_rata;

    printf("Jumlah data = ");
    scanf("%d", &n);

    jum = 0;
    pencacah = 1;
    while (pencacah <= n)
    {
        printf("Bilangan %d = ", pencacah);
        scanf("%lf", &bil);

        jum = jum + bil;
        pencacah = pencacah + 1;
    }

    rata_rata = jum / n;

    printf("Rata-rata = %lf\n", rata_rata);

    return 0;
}