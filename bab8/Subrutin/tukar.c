/* Penukaran data */
#include <stdio.h>

void tukar(double *x, double *y)
{
    double z;

    z = *x;
    *x = *y;
    *y = z;
}
int main()
{
    double a, b;

    a = 56.7;
    b = 12.3;

    tukar(&a, &b);

    printf("a = %lf, b = %lf\n", a, b);

    return 0;
}