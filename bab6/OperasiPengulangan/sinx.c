/* ---------------------------------------------------------------
Menghitung sinus

Pada GNU/Linuk kompilasilah dengan memberikan
perintah:

    gcc -lm sinx.c -o sinx
---------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main()
{
    double sinx, x, hasil_pangkat, faktorial;
    int i, j;

    printf("Masukkan sudut dalam radian: ");
    scanf("%lf", &x);

    sinx = x;
    for (i = 2; i <= 10; i++)
    {
        /* --- Hitung (2i-1)! --- */
        faktorial = 1;
        for (j = 2 * i - 1; j >= 1; j--)
            faktorial = faktorial * j;

        /* --- pangkat (2i-1) --- */
        hasil_pangkat = 1;
        for (j = 1; j <= (2 * i - 1); j++)
            hasil_pangkat *= x;

        /* --- Hitung jumlah sampai suku ke-i --- */
        if (i % 2 == 0)
            sinx = sinx - hasil_pangkat / faktorial;
        else
            sinx = sinx + hasil_pangkat / faktorial;
    }

    printf("Sinx (menurut perhitungan) = %lf\n", sinx);
    printf("Sinx (menurut pustaka) = %lf\n", sin(x));

    return 0;
}
