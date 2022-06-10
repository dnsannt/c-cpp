#include <stdio.h>

int main()
{
    double data[10];
    int i, jumdata;
    char jawaban;
    double jumtotal, rata_rata;

    jumdata = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Masukkan sebarang bilangan: ");
        scanf("%lf", &data[i]);

        printf("Memasukkan lagi (Y/T)? ");
        scanf("%c%c", &jawaban, &jawaban);

        if (jawaban == 'T' || jawaban == 't')
        {
            jumdata = i + 1;
            break;
        }
    }

    /* Hitung jumlah dari nilai keseluruhan elemen larik */
    jumtotal = 0;
    for (i = 0; i < jumdata; i++)
        jumtotal = jumtotal + data[i];

    rata_rata = jumtotal / jumdata;
    printf("Rata-rata = %lf\n", rata_rata);

    return 0;
}