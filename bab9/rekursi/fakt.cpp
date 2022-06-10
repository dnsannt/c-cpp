// Faktorial pada matematika
#include <iostream>
using namespace std;

long int faktorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}
int main()
{
    int bil, n;
    long int hasil;

    cout << "n = ";
    cin >> n;

    hasil = faktorial(n);

    cout << n << "! = " << hasil;

    return 0;
}