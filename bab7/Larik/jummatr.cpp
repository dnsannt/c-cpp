// Penjumlahan matriks */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[2][2] = {{6, 7}, {5, 8}};
    int b[2][2] = {{1, 3}, {4, -1}};
    int c[2][2];
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            c[i][j] = a[i][j] + b[i][j];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cout << setw(4) << c[i][j];

        cout << endl;
    }
    return 0;
}
