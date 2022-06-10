#include <iostream>
using namespace std;

int main()
{
    int kode_bulan;

    cout << "Masukkan kode bulan (1..12): ";
    cin >> kode_bulan;

    if (kode_bulan == 2)
        cout << "Jumlah hari 28 atau 29" << endl;
    else if (kode_bulan == 1 || kode_bulan == 3 ||
             kode_bulan == 5 || kode_bulan == 7 ||
             kode_bulan == 12)
        cout << "Jumlah hari 31" << endl;
    else if (kode_bulan == 4 || kode_bulan == 6 ||
             kode_bulan == 9 || kode_bulan == 11)
        cout << "Jumlah hari 30" << endl;
    else
        cout << "Salah kode bulan" << endl;

    return 0;
}