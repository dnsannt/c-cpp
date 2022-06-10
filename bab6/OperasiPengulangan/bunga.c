#include <stdio.h>

int main()
{
    long int pokok, bunga;
    int tahun;

    pokok = 5000000;
    for (tahun = 1; tahun <= 8; tahun++)
    {
        bunga = pokok * 7 / 100;
        printf("%2d %10d %10d\n",
               tahun, pokok, bunga);

        pokok = pokok + bunga;
    }

    return 0;
}