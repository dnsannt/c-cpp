#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sinx, x, hasil_pangkat, faktorial;
    int i, j;

    cout << "Masukkan sudut dalam radian: ";
    cin >> x;

    sinx = x;
    for (i = 2; i <= 10; i++)
    {
        // --- Hitung (2i-1)! ---
        faktorial = 1;
        for (j = 2 * i - 1; j >= 1; j--)
            faktorial = faktorial * j;

        // --- x pangkat (2i-1) ---
        hasil_pangkat = 1;
        for (j = 1; j <= (2 * i - 1); j++)
            hasil_pangkat *= x;

        // --- Hitung jumlah sampai suku ke-i ---
        if (i % 2 == 0)
            sinx = sinx - hasil_pangkat / faktorial;
        else
            sinx = sinx + hasil_pangkat / faktorial;
    }

    cout << "Sinx (menurut perhitungan) = "
         << sinx << endl;
    cout << "Sinx (menurut pustaka) = "
         << sin(x) << endl;

    return 0;
}