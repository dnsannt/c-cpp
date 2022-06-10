/* Tulislah subrutin bernama POSKAR yang memiliki dua buah argumen /*
/* Argumen pertama berupa suatu string */
/* Argumen kedua berupa karakter sebagai kunci pencarian */
#include <iostream>
#include <string.h>
using namespace std;

int poskar(char st[], char k)
{
    int i, posisi, panjang;

    i = 0;
    posisi = -1;
    panjang = strlen(st);
    while ((i < panjang - 1) && posisi == -1)
    {
        if (st[i] == k)
            posisi = i;
        i++;
    }

    return posisi;
}

int main()
{
    char kalimat[] = "Hallo kawan";
    char dicari = 'k';

    cout << "Posisi " << dicari << " dalam string "
         << kalimat << ": "
         << poskar(kalimat, dicari) << endl;

    char dicari = 'L'; /* Hasil output -1 artinya tidak ditemukan */
    cout << "Posisi " << dicari << " dalam string "
         << kalimat << ": "
         << poskar(kalimat, dicari) << endl;

    return 0;
}
