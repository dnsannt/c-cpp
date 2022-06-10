// Fungsi fibonacci
#include <iostream>
using namespace std;

long int fib(unsigned int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int bil, n;
    long int hasil;

    cout << "n = ";
    cin >> n;

    hasil = fib(n);

    cout << "fib(" << n << ") = " << hasil;

    return 0;
}