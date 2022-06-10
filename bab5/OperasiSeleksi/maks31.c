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

    terbesar = x; // Anggap dulu x yang terbesar

    if (terbesar < y) // Bandingakan dengan y
        terbesar = y;

    if (terbesar < z) // Bandingkan dengan z
        terbesar = z;

    printf("Terbesar = %lf\n", terbesar);

    return 0;
}