#include <iostream>
using namespace std;

int main()
{
    double x, y;

    cout << "Masukkan x: ";
    cin >> x;

    cout << "Masukkan y: ";
    cin >> y;

    if (x > y)
        cout << "Bilangan terbesar = " << x << endl;
    else
        cout << "Bilangan terbesar = " << y << endl;

    return 0;
}
