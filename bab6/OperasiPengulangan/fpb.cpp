#include <iostream>
using namespace std;

int main()
{
    int m, n, r;

    cout << "Masukkan m: ";
    cin >> m;

    cout << "Masukkan n: ";
    cin >> n;

    r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    cout << "FPB: " << n << endl;

    return 0;
}