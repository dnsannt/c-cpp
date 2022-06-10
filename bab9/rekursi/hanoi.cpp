// Permainan menara hanoi ini dibuat  menggunakan rekrusi yang dapat di lihat pada void hanoi
#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
        cout << "Pindahkan piring dari " << a << " ke " << c << endl;
    else
    {
        hanoi(n - 1, a, c, b);
        hanoi(1, a, b, c);
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int jum_piring;

    cout << "Jumlah piring: ";
    cin >> jum_piring;

    hanoi(jum_piring, 'A', 'B', 'C');

    return 0;
}