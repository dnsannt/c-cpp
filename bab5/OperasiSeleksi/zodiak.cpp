#include <iostream>
using namespace std;

int main()
{
    int tanggal, bulan;

    cout << "Masukkan tanggal kelahiran (1..31): ";
    cin >> tanggal;

    cout << "Masukkan bulan kelahiran (1..12): ";
    cin >> bulan;

    if ((tanggal >= 21 && bulan == 3) ||
        (tanggal <= 19 && bulan == 4))
        cout << "Zodiak Aries\n";
    else if ((tanggal >= 20 && bulan == 4) ||
             (tanggal <= 20 && bulan == 5))
        cout << "Zodiak Taurus" << endl;
    else if ((tanggal >= 21 && bulan == 5) ||
             (tanggal <= 20 && bulan == 6))
        cout << "Zodiak Gemini" << endl;
    else if ((tanggal >= 21 && bulan == 6) ||
             (tanggal <= 22 && bulan == 7))
        cout << "Zodiak Cancer" << endl;
    else if ((tanggal >= 23 && bulan == 7) ||
             (tanggal <= 22 && bulan == 8))
        cout << "Zodiak Leo" << endl;
    else if ((tanggal >= 23 && bulan == 8) ||
             (tanggal <= 22 && bulan == 9))
        cout << "Zodiak Virgo" << endl;
    else if ((tanggal >= 23 && bulan == 9) ||
             (tanggal <= 22 && bulan == 10))
        cout << "Zodiak Libra" << endl;
    else if ((tanggal >= 23 && bulan == 10) ||
             (tanggal <= 21 && bulan == 11))
        cout << "Zodiak Scorpio" << endl;
    else if ((tanggal >= 22 && bulan == 11) ||
             (tanggal <= 21 && bulan == 12))
        cout << "Zodiak Sagitarius" << endl;
    else if ((tanggal >= 22 && bulan == 12) ||
             (tanggal <= 19 && bulan == 1))
        cout << "Zodiak Capricorn" << endl;
    else if ((tanggal >= 20 && bulan == 1) ||
             (tanggal <= 18 && bulan == 2))
        cout << "Zodiak " << endl;
    else
        cout << "Zodiak Pisces" << endl;

    return 0;
}