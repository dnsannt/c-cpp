#include <stdio.h>

int main()
{
    int i, n;
    double jum, tanda;

    printf("n: ");
    scanf("%d", &n);

    tanda = -1;
    jum = 1;
    for (i = 2; i <= n; i++)
    {
        jum = jum + tanda / i;
        tanda = tanda;
    }

    printf("Jumlah = %lf\n", jum);

    return 0;
}