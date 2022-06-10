#include <iostream>
using namespace std;

int main()
{
    double data[10];
    int i, jumdata;
    char jawaban;
    double jumtotal, rata_rata;

    jumdata = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Masukkan sebarang bilangan: ";
        cin >> data[i];

        cout << "Memasukkan lagi (Y/T)? ";
        cin >> jawaban;

        if (jawaban == 'T' || jawaban == 't')
        {
            jumdata = i + 1;
            break;
        }
    }

    // Hitung jumlah dari keseluruhan elemen larik
    jumtotal = 0;
    for (i = 0; i < jumdata; i++)
        jumtotal = jumtotal + data[i];

    rata_rata = jumtotal / jumdata;
    cout << "Rata-rata " << rata_rata << endl;

    return 0;
}