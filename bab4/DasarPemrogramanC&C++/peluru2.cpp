#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double kecepatan, sudut, jarak;

    cout << "Kecepatan: ";
    cin >> kecepatan;

    cout << "Sudut  : ";
    cin >> sudut;

    jarak = 2 * kecepatan * kecepatan *
            sin(sudut * 3.14 / 180) *
            cos(sudut * 3.14 / 180) / 9.8;

    cout << "Jarak = " << jarak << endl;

    return 0;
}