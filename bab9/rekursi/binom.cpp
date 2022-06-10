// Koefisien binomial
#include <iostream>
using namespace std;

int binom(int n, int k)
{
    if (k == 0)
        return 1;
    else if (k == n)
        return 1;
    else
        return binom(n - 1, k - 1) + binom(n - 1, k);
}
int main()
{
    cout << binom(1, 1) << endl;
    cout << binom(5, 3) << endl;

    return 0;
}