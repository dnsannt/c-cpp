#include <stdio.h>

int main()
{
    int tahun;

    printf("Tahun (1..3999): ");
    scanf("%d", &tahun);

    if (tahun < 1 || tahun > 3999)
        printf("Tahun harus dalam jangkauan 1..3999");
    else
    {
        while (tahun >= 1000)
        {
            printf("M");
            tahun = tahun - 1000;
        }
        if (tahun >= 500)
        {
            if (tahun >= 900)
            {
                printf("CM");
                tahun = tahun - 900;
            }
            else
            {
                printf("D");
                tahun = tahun - 500;
            }
        }
        while (tahun >= 100)
        {
            if (tahun >= 400)
            {
                printf("CD");
                tahun = tahun - 400;
            }
            else
            {
                printf("C");
                tahun = tahun - 100;
            }
        }
        if (tahun >= 50)
        {
            if (tahun >= 90)
            {
                printf("XC");
                tahun = tahun - 90;
            }
            else
            {
                printf("L");
                tahun = tahun - 50;
            }
        }
        while (tahun >= 10)
        {
            if (tahun >= 40)
            {
                printf("XL");
                tahun = tahun - 40;
            }
            else
            {
                printf("X");
                tahun = tahun - 10;
            }
        }
        if (tahun >= 5)
        {
            if (tahun == 9)
            {
                printf("IX");
                tahun = tahun - 9;
            }
            else
            {
                printf("V");
                tahun = tahun - 5;
            }
        }
        while (tahun >= 1)
        {
            if (tahun == 4)
            {
                printf("IV");
                tahun = tahun - 4;
            }
            else
            {
                printf("I");
                tahun = tahun - 1;
            }
        }
    }
    printf("\n"); /* Pindah baris */
    return 0;
}