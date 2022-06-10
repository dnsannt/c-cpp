/* -------------------------------------------------------------------
    Menghitung pi

    Pada GNU/Linux, kompilasilah dengan memberikan
    perintah:

        gcc -lm pi.c -o pi
    ----------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, bil;
    double jum, pi;

    printf("n = ");
    scanf("%d", &n);

    jum = 0;
    bil = 1;
    while (bil <= n)
    {
        jum = jum + 1.0 / (bil * bil);
        bil = bil + 1;
    }

    pi = sqrt(jum * 6);

    printf("pi = %lf\n", pi);

    return 0;
}