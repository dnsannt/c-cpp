#include <iostream>
using namespace std;

int main()
{
    int tahun;

    cout << "Tahun (1..3999): ";
    cin >> tahun;

    if (tahun < 1 || tahun > 3999)
        cout << "Tahun harus dalam jangkauan 1.3999";
    else
    {
        while (tahun >= 1000)
        {
            cout << "M";
            tahun = tahun - 1000;
        }
        if (tahun >= 500)
        {
            if (tahun >= 900)
            {
                cout << "CM";
                tahun = tahun - 900;
            }
            else
            {
                cout << "D";
                tahun = tahun - 500;
            }
        }
        while (tahun >= 100)
        {
            if (tahun >= 400)
            {
                cout << "CD";
                tahun = tahun - 400;
            }
            else
            {
                cout << "C";
                tahun = tahun - 100;
            }
        }
        if (tahun >= 50)
        {
            if (tahun >= 90)
            {
                cout << "XC";
                tahun = tahun - 90;
            }
            else
            {
                cout << "L";
                tahun = tahun - 50;
            }
        }
        while (tahun >= 10)
        {
            if (tahun >= 40)
            {
                cout << "XL";
                tahun = tahun - 40;
            }
            else
            {
                cout << "X";
                tahun = tahun - 10;
            }
        }
        if (tahun >= 5)
        {
            if (tahun == 9)
            {
                cout << "IX";
                tahun = tahun - 9;
            }
            else
            {
                cout << "V";
                tahun = tahun - 5;
            }
        }
        while (tahun >= 1)
        {
            if (tahun == 4)
            {
                cout << "IV";
                tahun = tahun - 4;
            }
            else
            {
                cout << "I";
                tahun = tahun - 1;
            }
        }
    }
    cout << endl; /* Pindah baris */
    return 0;
}