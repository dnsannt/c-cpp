/* Subrutin untuk menentukan suatu bilangan terkecil dalam suatu larik */
#include <stdio.h>

double terkecil(double x[], int jum)
{
    int i;
    double min;

    min = x[0];
    for (i = 1; i < jum; i++)
        if (x[i] < min)
            min = x[i];

    return min;
}

int main()
{
    double y;
    double data[] = {578, 57.8, 2.3, 24, 123.5};

    y = terkecil(data, 5);

    printf("Terkecil = %lf\n", y);

    return 0;
}