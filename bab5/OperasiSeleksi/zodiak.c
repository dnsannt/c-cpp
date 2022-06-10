#include <stdio.h>
int main()
{
    int tanggal, bulan;

    printf("Masukkan tanggal kelahiran (1..31): ");
    scanf("%d", &tanggal);

    printf("Masukkan bulan kelahiran (1..12): ");
    scanf("%d", &bulan);

    if ((tanggal >= 21 && bulan == 3) ||
        (tanggal <= 19 && bulan == 4))
        printf("Zodiak Aries\n");
    else if ((tanggal >= 20 && bulan == 4) ||
             (tanggal <= 20 && bulan == 5))
        printf("Zodiak Taurus\n");
    else if ((tanggal >= 21 && bulan == 5) ||
             (tanggal <= 20 && bulan == 6))
        printf("Zodiak Gemini\n");
    else if ((tanggal >= 21 && bulan == 6) ||
             (tanggal <= 22 && bulan == 7))
        printf("Zodiak Cancer\n");
    else if ((tanggal >= 23 && bulan == 7) ||
             (tanggal <= 22 && bulan == 8))
        printf("Zodiak Leo\n");
    else if ((tanggal >= 23 && bulan == 8) ||
             (tanggal <= 22 && bulan == 9))
        printf("Zodiak Virgo\n");
    else if ((tanggal >= 23 && bulan == 9) ||
             (tanggal <= 22 && bulan == 10))
        printf("Zodiak Libra\n");
    else if ((tanggal >= 23 && bulan == 10) ||
             (tanggal <= 21 && bulan == 11))
        printf("Zodiak Scorpio\n");
    else if ((tanggal >= 22 && bulan == 11) ||
             (tanggal <= 21 && bulan == 12))
        printf("Zodiak Sagitarius\n");
    else if ((tanggal >= 22 && bulan == 12) ||
             (tanggal <= 19 && bulan == 1))
        printf("Zodiak Capricorn\n");
    else if ((tanggal >= 20 && bulan == 1) ||
             (tanggal <= 18 && bulan == 2))
        printf("Zodiak Aquarius\n");
    else
        printf("Zodiak Pisces\n");

    return 0;
}