/* Menampilkan bulan menggunakan larik */
#include <iostream>
using namespace std;

int main()
{
    char nama_bulan[][10] = {"",
                             "Januari",
                             "Februari",
                             "Maret",
                             "April",
                             "Mei",
                             "Juni",
                             "Juli",
                             "Agustus",
                             "September",
                             "Oktober",
                             "November",
                             "Desember"};

    int kode_bulan;

    cout << "Kode bulan (1..12): ";
    cin >> kode_bulan;

    if (kode_bulan >= 1 && kode_bulan <= 12)
        cout << "Bulan : " << nama_bulan[kode_bulan] << endl;
    else
        cout << "Kode bulan harus berada antara 1 s/d 12\n";

    return 0;
}