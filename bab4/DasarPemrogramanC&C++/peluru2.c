#include <stdio.h>
#include <math.h>

int main()
{
    double kecepatan, sudut, jarak;

    printf("Kecepatan: ");
    scanf("%lf", &kecepatan);

    printf("Sudut   : ");
    scanf("%lf", &sudut);

    jarak = 2 * kecepatan * kecepatan *
            sin(sudut * 3.14 / 180) *
            cos(sudut * 3.14 / 180) / 9.8;

    printf("Jarak = %f", jarak);

    return 0;
}