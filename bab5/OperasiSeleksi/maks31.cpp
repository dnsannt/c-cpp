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

    terbesar = x; // Anggap dulu x yang terbesar

    if (terbesar < y) // Bandingkan dengan y
        terbesar = y;

    if (terbesar < z) // Bandingkan dengan z
        terbesar = z;

    cout << "Terbesar = " << terbesar << endl;

    return 0;
}