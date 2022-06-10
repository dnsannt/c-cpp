/*Pengurutan data BUBBLE SORT */
/* pemeriksaan apakah masih ada penukaran data atau tidak kalau dalam suatu tahap ternyata tidak terjadi penukaran data maka iterasi segera dihentikan */
#include <stdio.h>

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", data[i]);

    printf("\n");
}

void bubble_sort(int data[], int n)
{
    int tahap, j, tmp;
    int ada_penukaran;

    tahap = 1;
    ada_penukaran = 1;
    while (tahap < n - 1 && ada_penukaran)
    {
        ada_penukaran = 0;
        for (j = 0; j < n - tahap; j++)
            if (data[j] > data[j + 1])
            {
                ada_penukaran = 1;
                /* Tukarkan */
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }

        printf("Hasil tahap %d: ", tahap);
        tampilkan_larik(data, n);

        tahap++;
    }
}

int main()
{
    const JUM_DATA = 8;

    int i;
    int data[] = {25, 57, 48, 37, 12, 92, 80, 33};

    bubble_sort(data, JUM_DATA);

    /* Hasil pengurutan */
    printf("Hasil pengurutan:\n");
    tampilkan_larik(data, JUM_DATA);

    return 0;
}