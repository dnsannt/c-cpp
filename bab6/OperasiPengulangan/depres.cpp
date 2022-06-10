#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long int biaya;
    int i, jum, tahun;
    double depresiasi;

    cout << "Biaya: ";
    cin >> biaya;

    cout << "Tahun: ";
    cin >> tahun;

    jum = tahun * (tahun + 1) / 2;
    for (i = 1; i <= tahun; i++)
    {
        depresiasi= (tahun + 1.0 - i) / jum * biaya;
        cout << setw(2) << i
        << setiosflags(ios::fixed)
        << setw(15)
        << setprecision(0) << depresiasi
        << endl;
    }

    return 0;
}