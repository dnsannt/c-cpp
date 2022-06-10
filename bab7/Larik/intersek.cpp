// Memperoleh interseksi dua buah larik //
#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 5, 6, 8};
    int b[6] = {4, 6, 1, 5, 2, 8};
    int c[6];

    int i, j;
    int jum_interseksi;
    int dicari;

    jum_interseksi = 0;

    for (i = 0; i <= 5; i++)
    {
        dicari = a[i];
        for (j = 0; j <= 5; j++)
            if (dicari == b[i])
            {
                c[jum_interseksi] = dicari;
                jum_interseksi++;
                break;
            }
    }

    if (jum_interseksi == 0)
        cout << "Hasil interseksi tidak ada\n";
    else
    {
        cout << "Interseksi:\n";
        for (i = 0; i < jum_interseksi; i++)
            cout << c[i] << endl;
    }

    return 0;
}