/* Menukarkan dua angka yang bersebelahan */
#include <stdio.h>

int main()
{
    int data[] = {8, 9, 4, 7, 6, 1, 5, 3, 10, 4, 16, 3};
    int tmp;

    int i;
    for (i = 0; i < 11; i += 2)
    {
        tmp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = tmp;
    }

    /* Tampilkan isi larik */
    for (i = 0; i < 12; i++)
        printf("%d ", data[i]);

    printf("\n");

    return 0;
}