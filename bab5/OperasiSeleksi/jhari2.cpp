#include <iostream>
using namespace std;

int main()
{
    int kode_bulan;

    cout << "Masukkan kode bulan (1..12): ";
    cin >> kode_bulan;

    switch (kode_bulan)
    {
    case 2:
        cout << "Jumlah hari 28 atau 29" << endl;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Jumlah hari 31" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Jumlah hari 30" << endl;
        break;
    default:
        cout << "Salah kode bulan\n";
    }

    return 0;
}