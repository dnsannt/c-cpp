#include <iostream>
using namespace std;

int main()
{
    int i, n;
    double jum, tanda;

    cout << "n: ";
    cin >> n;

    tanda = -1;
    jum = 1;
    for (i = 2; i <= n; i++)
    {
        jum = jum + tanda / i;
        tanda = -tanda;
    }

    cout << "Jumlah = " << jum << endl;

    return 0;
}