#include <iostream>
using namespace std;

int main()
{
    double x, y, terbesar;

    cout << "Masukkan x: ";
    cin >> x;

    cout << "Masukan y: ";
    cin >> y;

    //mengasumsikan yang terbesar adalah x
    terbesar = x;

    if (terbesar < y)
        terbesar = y;

    cout << "Bilangan terbesar = " << terbesar << endl;

    return 0;
}
