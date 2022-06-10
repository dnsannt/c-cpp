// Menghitung nilai terkecil menggunakan subrutin
#include <iostream>
using namespace std;

double terkecil(double x, double y)
{
    double min;

    if (x < y)
        min = x;
    else
        min = y;
}

int main()
{
    double a, b, c;
    a = 35.6;
    b = 78.5;
    c = terkecil(a, b);

    cout << "Terkecil dari " << a << " dan " << b
         << " : " << c << endl;

    return 0;
}