// Pencarian DATA
// memiliki 4 argumen
#include <iostream>
using namespace std;

int cari(int data[], int n, int k, int m)
{
    int posisi, i, ketemu;
    int pencacah = 0;

    if (n <= 0)
        posisi = -1;
    else
    {
        ketemu = 0;
        i = 1;
        while ((i < n - 1) && !ketemu)
            if (data[i] == k)
            {
                pencacah++;
                printf("pencacah %d\n", pencacah);
                if (pencacah == m)
                {
                    printf("ketemu %d\n", pencacah);
                    posisi = i;
                    ketemu = 1;
                }
                else
                    i++;
            }
            else
                i++;

        if (!ketemu)
            posisi = -1;
    }

    return posisi;
}

int main()
{
    int data[8] = {10, 9, 4, 6, 3, 4, 2, 5};
    int dicari;
    int ke;

    dicari = 4;
    ke = 2;
    cout << "Posisi " << dicari << " yang ke-"
         << ke << " dalam larik data: "
         << cari(data, 8, dicari, ke) << "\n";

    dicari = 4;
    ke = 1;
    cout << "Posisi " << dicari << " yang ke-"
         << ke << " dalam larik data: "
         << cari(data, 8, dicari, ke) << "\n";

    dicari = 5;
    ke = 2;
    cout << "Posisi " << dicari << " yang ke-"
         << ke << " dalam larik data: "
         << cari(data, 8, dicari, ke) << "\n";

    return 0;
}