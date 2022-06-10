#include <stdio.h>

int main()
{
    double x, y;

    printf("Masukkan x: ");
    scanf("%lf", &x);

    printf("Masukkan y: ");
    scanf("%lf", &y);

    if (x > y)
        printf("Bilangan terbesar = %lf\n", x);
    else
        printf("Bilangan terbesar = %lf\n", y);

    return 0;
}
