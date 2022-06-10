/* Metode pengurutan data BUBBLE SORT */
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

    for (tahap = 1; tahap < n; tahap++)
    {
        for (j = 0; j < n - tahap; j++)
            if (data[j] > data[j + 1])
            {
                /* Tukarkan */
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }

        printf("Hasil tahap %d: ", tahap);
        tampilkan_larik(data, n);
    }
}

int main()
{
    const JUM_DATA = 8;

    int i;
    int data[] = {8, 7, 6, 5, 4, 3, 2, 1};

    bubble_sort(data, JUM_DATA);

    /* Hasil pengurutan */
    printf("Hasil pengurutan:\n");
    tampilkan_larik(data, JUM_DATA);

    return 0;
}