#include <iostream>
using namespace std;

int main()
{
    int n, pencacah, jum;

    cout << "n = ";
    cin >> n;

    jum = 0;
    pencacah = 1;
    while (pencacah <= n)
    {
        jum = jum + pencacah;
        pencacah = pencacah + 1;
    }

    cout << "Jumlah = " << jum << "\n";

    return 0;
}