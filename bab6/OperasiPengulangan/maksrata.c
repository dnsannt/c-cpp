#include <stdio.h>

int main()
{
    int selesai, pencacah;
    double jum, bil, terbesar, rata_rata;

    selesai = 0; // Berarti tidak selesai
    pencacah = 0;
    jum = 0;

    while (!selesai)
    {
        printf("Masukkan bilangan (Akhiri dengan -9999) ");
        scanf("%lf", &bil);

        if (bil == -9999)
            selesai = 1; // berarti selesai
        else
        {
            pencacah++;
            jum += bil;

            if (pencacah == 1)
                terbesar = bil;
            else if (bil > terbesar)
                terbesar = bil;
        }
    }

    if (pencacah == 0)
        printf("Tak ada data yang dimasukkan\n");
    else
    {
        rata_rata = jum / pencacah;
        printf("Terbesar = %f\n", terbesar);
        printf("Rata-rata = %f\n", rata_rata);
    }

    return 0;
}