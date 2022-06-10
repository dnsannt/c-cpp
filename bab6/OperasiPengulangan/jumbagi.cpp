#include <iostream>
using namespace std;

int main()
{
    int i, n;
    double jum;

    cout << "n: ";
    cin >> n;

    jum = 1;
    for (i = 2; i <= n; i++)
        if (i % 2 == 0)
            jum = jum - 1.0 / i;
        else
            jum = jum + 1.0 / i;

    cout << "Jumlah = " << jum << endl;

    return 0;
}