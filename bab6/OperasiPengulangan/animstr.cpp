#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, j, panjang;
    char string[80];

    cout << "Masukkan sebarang string: ";
    cin >> string;

    panjang = strlen(string);
    for (i = 0; i < panjang; i++)
    {
        for (j = i; j < panjang; j++)
            cout << string[j];

        cout << endl; // Pindah baris
    }

    return 0;
}