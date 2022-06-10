#include <stdio.h>

int main()
{
    double jum;
    int pencacah, bil;

    for (bil = 1; bil <= 99; bil++)
    {
        jum = jum + (double)bil / (bil + 1);
    }

    printf("Jumlah = %lf\n", jum);

    return 0;
}