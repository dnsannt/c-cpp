// Pencarian menurut penggalan nama
#include <iostream>
#include <string.h>
using namespace std;

int posstr(char st1[], char st2[])
{
    int indeks1, indeks2, indeks3, ketemu, posisi;
    int panjang1 = strlen(st1);
    int panjang2 = strlen(st2);

    indeks1 = 0;
    posisi = -1;
    ketemu = 0;

    while ((indeks1 < panjang1) && !ketemu)
    {
        // Jika panjang yang dicari lebih panjang dari
        // sisa string untuk pencarian
        if (panjang2 > (panjang1 - indeks1))
            break;

        indeks3 = indeks1;
        ketemu = 1;
        for (indeks2 = 0; indeks2 < panjang2; indeks2++)
        {
            if (st1[indeks3] == st2[indeks2])
                indeks3++;
            else
            {
                ketemu = 0;
                break;
            }
        }

        if (ketemu)
            posisi = indeks1;
        else
            indeks1++;
    }

    return posisi;
}

void carinama(char data[][35], int n, char nama[])
{
    int i;
    for (i = 0; i < n; i++)
        if (posstr(data[i], nama) != -1)
            cout << data[i] << "\n";
}

int main()
{
    char daftar_nama[][35] = {"ahmad dani",
                              "ali hamdani",
                              "edi ahmadi",
                              "dian",
                              "fahmi rahmadi"};

    carinama(daftar_nama, 5, "ahmad");

    return 0;
}