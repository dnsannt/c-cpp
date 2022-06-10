/* Pencarian DATA berupa posisi terkanan dari DATA yang dicari */
#include <stdio.h>

int cari(int data[], int n, int k)
{
    int posisi, i, ketemu;

    if (n <= 0)
        posisi = -1;
    else
    {
        ketemu = 0;
        i = n - 1;
        while ((i >= 0) && !ketemu)
            if (data[i] == k)
            {
                posisi = i;
                ketemu = 1;
            }
            else
                i--;

        if (!ketemu)
            posisi = -1;
    }

    return posisi;
}

int main()
{
    int data[8] = {6, 7, 8, 5, 7, 8, 1, 9};
    int dicari = 8;

    printf("Posisi %d dalam larik data: %d\n",
           dicari, cari(data, 8, dicari));

    return 0;
}