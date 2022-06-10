/* Membaca data sekumpulan nama siswa dan nilai */
#include <stdio.h>

int main()
{
    struct siswa
    {
        char nama[25];
        double nilai;
    };

    struct siswa daftar[10];
    int pencacah;
    double jum;
    int ada_gagal;

    pencacah = 0;
    while (pencacah < 5)
    {
        printf("Nama siswa: ");
        scanf("%s", daftar[pencacah].nama);

        while (1)
        {
            printf("Nilai: ");
            scanf("%lf", &daftar[pencacah].nilai);

            if (daftar[pencacah].nilai >= 0 &&
                daftar[pencacah].nilai <= 100)
                break;
            else
            {
                printf("Nilai harus terletak ");
                printf("antara 0 sampai dengan 100\n");
            }
        }

        pencacah++;
    }
    
    /* Jumlahkan semua nilai */
    jum = 0;
    pencacah = 0;
    while (pencacah < 5)
    {
        jum = jum + daftar[pencacah].nilai;
        pencacah++;
    }

    /* Menampilkan siswa yang gagal */
    printf("Siswa gagal:\n");
    ada_gagal = 0;
    pencacah = 0;
    while (pencacah < 5)
    {
        if (daftar[pencacah].nilai < 60)
        {
            ada_gagal = 1;
            printf("%s\n", daftar[pencacah].nama);
        }

        pencacah++;
    }

    if (ada_gagal == 0)
        printf("Tak ada\n");

    return 0;
}