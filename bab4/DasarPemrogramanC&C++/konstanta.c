#include <stdio.h>

int main()
{
    const double PHI = 3.14;
    
    double jari_jari;
    double luas;

    jari_jari = 20;

    luas = PHI * jari_jari * jari_jari;

    printf("Luas lingkaran = %1f", luas);

    return 0;
}