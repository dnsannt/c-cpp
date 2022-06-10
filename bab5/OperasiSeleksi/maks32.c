#include <stdio.h>

int main()
{
    double x, y, z, terbesar;

    printf("Bilangan x: ");
    scanf("%lf", &x);

    printf("Bilangan y: ");
    scanf("%lf", &y);

    printf("Bilangan z: ");
    scanf("%lf", &z);

    if (x > y && x > z)
        terbesar = x;
    else if (y > x && y > z)
        terbesar = y;
    else 
        terbesar = z;

    printf("Terbesar = %lf\n", terbesar);

    return 0;
}