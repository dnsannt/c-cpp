// Penukaran data
#include <iostream>
using namespace std;

void tukar(double *x, double *y)
{
    double z;

    z = *x;
    *x = *y;
    *y = z;
}
int main()
{
    double a, b;

    a = 56.7;
    b = 12.3;

    tukar(&a, &b);

    cout << "a = " << a << " , "
         << "b = " << b << "\n";

    return 0;
}