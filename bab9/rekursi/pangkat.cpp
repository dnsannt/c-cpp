// Proses rekrusi pangkat
#include <iostream>
using namespace std;

long int pangkat(unsigned int y, unsigned int n)
{
    if (n == 1)
        return y;
    else
        return y * pangkat(y, n - 1);
}
int main()
{
    int y, n;
    long int hasil;

    cout << "Menghitung y pangkat n\n";

    cout << "y = ";
    cin >> y;

    cout << "n = ";
    cin >> n;

    hasil = pangkat(y, n);

    cout << y << "^" << n << " = " << hasil;

    return 0;
}