#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 2 == 0)
        cout << "Bilangan genap" << endl;
    else
        cout << "Bilangan gajil" << endl;

    return 0;
}
