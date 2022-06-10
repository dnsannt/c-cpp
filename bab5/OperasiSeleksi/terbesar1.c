#include <stdio.h>

int main()
{
    double x, y, terbesar;

    printf("Masukkan x:  ");
    scanf("%lf", &x);

    printf("MAsukkan y: ");
    scanf("%lf", &y);

    /* mengasumsikan yang terbesar adalah x */
    terbesar = x;

    if (terbesar < y)
        terbesar = y;

    printf("Bilangan terbesar = %lf\n", terbesar);

    return 0;
}
