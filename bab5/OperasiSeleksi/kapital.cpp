#include <iostream>
using namespace std;

int main()
{
    char karakter;

    cout << "Masukkan sebuah karakter: ";
    cin >> karakter;

    if (karakter >= 'A' && karakter <= 'Z')
        cout << karakter << " Termasuk huruf kapital" << endl;
    else
        cout << karakter << " Bukan huruf kapital" << endl;

    return 0;
}