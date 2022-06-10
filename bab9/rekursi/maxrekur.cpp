// Menghasilkan bilangan terbesar pada k elemen
#include <iostream>
using namespace std;

int maks(int data[], int n, int k)
{
    if (k > n)
        k = n;

    if (k == 1)
        return data[0];
    else if (k > 1)
        if (data[k - 1] > maks(data, n, k - 1))
            return data[k - 1];
        else
            return maks(data, n, k - 1);
    else /* Berarti k < 1 */
        return -32768;
}
int main()
{
    int L[] = {1, 4, 6, 2, 8, 5, 2, 4, 3};

    cout << maks(L, 9, 2) << endl;
    cout << maks(L, 9, 4) << endl;
    cout << maks(L, 9, 9) << endl;

    return 0;
}