#include <stdio.h>

int main()
{
    int i, n;
    double jum;

    printf("n: ");
    scanf("%d", &n);

    jum = 1;
    for (i = 2; i <= n; i++)
        if (i % 2 == 0)
            jum = jum - 1.0 / i;
        else
            jum = jum + 1.0 / i;

    printf("Jumlah = %lf\n", jum);

    return 0;
}