#include <iostream>
using namespace std;

int main()
{
    int kode_bulan;

    cout << "Masukkan kode bulan (1..12:) ";
    cin >> kode_bulan;

    if (kode_bulan == 1)
        cout << "Januari" << endl;
    else if (kode_bulan ==2)
        cout << "Februari" << endl;
    else if (kode_bulan == 3)
        cout << "Maret" << endl;
    else if (kode_bulan == 4)
        cout << "April" << endl;
    else if (kode_bulan == 5)
        cout << "Meil" << endl;
    else if (kode_bulan == 6)
        cout << "Juni" << endl;
    else if (kode_bulan == 7)
        cout << "Juli" << endl;
    else if (kode_bulan == 8)
        cout << "Agustus" << endl;
    else if (kode_bulan == 9)
        cout << "September" << endl;
    else if (kode_bulan == 10)
        cout << "Oktober" << endl;
    else if (kode_bulan == 11)
        cout << "November" << endl;
    else if (kode_bulan == 12)
        cout << "Desember" << endl;
    else 
        cout << "Salah kode bulan" << endl;

    return 0;
    
}