// Memasukkan data matriks dari keyboard
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jum_baris, jum_kolom;
    int i, j;

    int data[10][10];

    cout << "Jumlah baris (1..10): ";
    cin >> jum_baris;

    cout << "Jumlah kolom (1..10): ";
    cin >> jum_kolom;

    // Pemasukan elemen matriks
    for (i = 0; i <= jum_baris - 1; i++)
        for (j = 0; j <= jum_kolom - 1; j++)
        {
            cout << "Nilai baris " << i + 1
                 << ", kolom " << j + 1 << ": ";
            cin >> data[i][j];
        }

    // Menampilkan matriks
    cout << "Data matriks: \n";
    for (i = 0; i <= jum_baris - 1; i++)
    {
        for (j = 0; j <= jum_kolom - 1; j++)
            cout << setw(8) << data[i][j];

        cout << endl; // Pindah baris
    }

    return 0;
}