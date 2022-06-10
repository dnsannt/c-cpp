#include <stdio.h>

int main()
{
    int kode_bulan;

    printf("Masukkan kode bulan (1..12): ");
    scanf("%d", &kode_bulan);

    switch (kode_bulan)
    {
    case 2:
        printf("Jumlah hari 28 atau 29\n");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Jumlah hari 31\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Jumlah hari 30\n");
        break;
    default:
        printf("Salah kode bulan\n");
    }

    return 0;
}