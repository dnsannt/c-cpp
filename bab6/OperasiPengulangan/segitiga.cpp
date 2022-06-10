#include <iostream>
using namespace std;

int main()
{
    int i, j, tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (i = 1; i <= tinggi; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}