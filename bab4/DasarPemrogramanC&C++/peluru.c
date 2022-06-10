#include <stdio.h>>
#include <math.h>

int main()
{
    double kecepatan, sudut, jarak;

    kecepatan = 32;
    sudut = 40;

    jarak = 2 * kecepatan * kecepatan *
            sin(sudut * 3.14 / 180) *
            cos(sudut * 3.14 / 180) / 9.8;
    
    printf("Jarak = %f", jarak);
    
}