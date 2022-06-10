/* Menghitung nilai terkecil menggunakan subrutin */
#include <stdio.h>

double terkecil(double x, double y)
{
    double min;

    if (x < y)
        min = x;
    else
        min = y;
}

int main()
{
    double a, b, c;
    a = 35.6;
    b = 78.5;
    c = terkecil(a, b);

    printf("Terkecil dari %lf dan %lf : %lf\n",
           a, b, c);

    return 0;
}