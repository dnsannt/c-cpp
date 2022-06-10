#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, tinggi, bil;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (i = 1; i <= tinggi; i++)
    {
        bil = i;
        for (j = 1; j <= i; j++)
        {
            cout << setw(3) << bil;
            bil = bil + tinggi - j;
        }

        cout << endl; // Pindah barus
    }

    return 0;
}