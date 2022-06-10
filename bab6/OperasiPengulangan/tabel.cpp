#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, jum_baris, jum_kolom, bil;

    cout << "Masukkan jumlah baris: ";
    cin >> jum_baris;

    cout << "Masukkan jumlah kolom: ";
    cin >> jum_kolom;

    for (i = jum_baris; i >= 1; i--)
    {
        bil = i;
        for (j = 1; j <= jum_kolom; j++)
        {
            cout << setw(3) << bil;
            bil = bil + jum_baris;
        }

        cout << endl; // Pindah baris
    }

    return 0;
}