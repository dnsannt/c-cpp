#include <stdio.h>

int main()
{
    int kode_bulan;

    printf("Masukkan kode bulan (1..12_: ");
    scanf("%d", &kode_bulan);

    if (kode_bulan == 2)
        printf("Jumlah hari 28 atau 29\n");
    else if (kode_bulan == 1 || kode_bulan == 3 ||
             kode_bulan == 5 || kode_bulan == 7 ||
             kode_bulan == 9 || kode_bulan == 10 ||
             kode_bulan == 12)
        printf("Jumlah hari 31\n");
    else if (kode_bulan == 4 || kode_bulan == 6 ||
             kode_bulan == 9 || kode_bulan == 11)
        printf("Jumlah hari 30\n");
    else
        printf("Salah kode bulan\n");

    return 0;
}