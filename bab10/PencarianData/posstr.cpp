/* Mencari posisi indeks pada suatu string */
#include <iostream>
#include <cstring>
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

int main()
{
    char kalimat[] = "Daun cemarapun berderai-derai";
    char kata1[] = "derai";
    char kata2[] = "Dedaunan";

    cout << posstr(kalimat, kata1) << endl;
    cout << posstr(kalimat, kata2) << endl;

    return 0;
}