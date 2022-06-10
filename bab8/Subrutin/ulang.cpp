// Ulang argumen berupa string
#include <iostream>
#include <cstring>
using namespace std;

char *ulang(char st[], int n)
{
    static char strtemp[1024];
    int i, j, panjang, posisi;

    panjang = strlen(st);

    if (panjang == 0)
        return (char *)0;

    posisi = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < panjang; j++)
        {
            strtemp[posisi] = st[j];
            posisi++;
        }

    strtemp[posisi] = 0;

    return (char *)strtemp;
}

int main()
{
    cout << ulang("+", 8) << endl;
    cout << ulang("HA", 4) << endl;
    cout << ulang("BLA", 3) << endl;
}