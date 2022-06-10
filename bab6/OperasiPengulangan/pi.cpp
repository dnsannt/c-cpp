#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, bil;
    double jum, pi;

    cout << "n = ";
    cin >> n;

    jum = 0;
    bil = 1;
    while (bil <= n)
    {
        jum = jum + 1.0 / (bil * bil);
        bil = bil + 1;
    }

    pi = sqrt(jum * 6);

    cout << "pi = " << pi << endl;

    return 0;
}