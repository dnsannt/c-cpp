// Fungsi ackermann adalah fungsi rekursif dengan dua peubah bilangan bulat yang didefinisikan
#include <iostream>
using namespace std;

long int acker(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return acker(m - 1, 1);
    else // Berarti m <> 0 dan n <> 0 */
        return acker(m - 1, acker(m, n - 1));
}
int main()
{
    cout << acker(0, 5) << endl;
    cout << acker(1, 0) << endl;
    cout << acker(3, 1) << endl;

    return 0;
}