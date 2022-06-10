#include <iostream>
using namespace std;

int main()
{
    int selesai, pencacah;
    double jum, bil, terbesar, rata_rata;

    selesai = 0; // Berarti tidak selesai
    pencacah = 0;
    jum = 0;

    while (!selesai)
    {
        cout << "Masukkan bilangan (Akhiri dengan -9999): ";
        cin >> bil;

        if (bil == -9999)
            selesai = 1; // berarti selesai
        else
        {
            pencacah++;
            jum += bil;

            if (pencacah == 1)
                terbesar = bil;
            else if (bil > terbesar)
                terbesar = bil;
        }
    }

    if (pencacah == 0)
        cout << "Tak ada data yang dimasukkan\n";
    else
    {
        rata_rata = jum / pencacah;
        cout << "Terbesar = " << terbesar << endl;
        cout << "Rata-rata = " << rata_rata << endl;
    }

    return 0;
}