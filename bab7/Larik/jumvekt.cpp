// Menjumlakan dua larik
#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 5, 6, 8};
    int b[6] = {4, 6, 1, 5, 2, 8};
    int c[6];

    int i;

    for (i = 0; i <= 5; i++)
        c[i] = a[i] + b[i];

    for (i = 0; i <= 5; i++)
        cout << c[i] << endl;

    return 0;
}