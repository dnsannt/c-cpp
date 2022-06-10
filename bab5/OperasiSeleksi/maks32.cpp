#include <iostream>
using namespace std;

int main()
{
    double x, y, z, terbesar;

    cout << "Bilangan x: ";
    cin >> x;

    cout << "Bilangan y: ";
    cin >> y;

    cout << "Bilangan z: ";
    cin >> z;

    if (x > y && x > z)
        terbesar = x;
    else if (y > x && y > z)
        terbesar = y;
    else
        terbesar = z;

    cout << "Terbesar = " << terbesar << endl;

    return 0;
}