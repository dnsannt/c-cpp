#include <stdio.h>

int main()
{
    int kode_bulan;

    printf("Masukkan kode bulan (1..12): ");
    scanf("%d", &kode_bulan);

    if (kode_bulan == 1)
        printf("Januari\n");
    else if (kode_bulan == 2)
        printf("Februari\n");
    else if (kode_bulan == 3)
        printf("Maret\n");
    else if (kode_bulan == 4)
        printf("April\n");
    else if (kode_bulan == 5)
        printf("Mei\n");
    else if (kode_bulan == 6)
        printf("Juni\n");
    else if (kode_bulan == 7)
        printf("Juli\n");
    else if (kode_bulan == 8)
        printf("Agustus\n");
    else if (kode_bulan == 9)
        printf("September\n");
    else if (kode_bulan == 10)
        printf("Oktober\n");
    else if (kode_bulan == 11)
        printf("Novemver\n");
    else if (kode_bulan == 12)
        printf("Desember\n");
    else 
        printf("Salah kode bulan\n");

    return 0;
    
}