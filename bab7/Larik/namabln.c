// Menampilkan bulan menggunakan larik
#include <stdio.h>

int main()
{
    char nama_bulan[][10] = {"",
                             "Januari",
                             "Februari",
                             "Maret",
                             "April",
                             "Mei",
                             "Juni",
                             "Juli",
                             "Agustus",
                             "September",
                             "Oktober",
                             "November",
                             "Desember"};

    int kode_bulan;

    printf("Kode bulan (1..12): ");
    scanf("%d", &kode_bulan);

    if (kode_bulan >= 1 && kode_bulan <= 12)
        printf("Bulan : %s\n", nama_bulan[kode_bulan]);
    else
        printf("Kode bulan harus berada antara 1 s/d 12\n");

    return 0;
}

