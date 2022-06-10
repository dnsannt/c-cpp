/* Nilai balik fungsi */
#include <stdio.h>
#include <string.h>

double hitung_keliling_kotak(double panjang, double lebar)
{
    double keliling;
    keliling = 2 * (panjang + lebar);

    return keliling;
}
int main()
{
    double keliling, panjang, lebar;

    panjang = 56.5;
    lebar = 2;

    keliling = hitung_keliling_kotak(panjang, lebar);
    printf("keliling = %lf\n", keliling);

    return 0;
}