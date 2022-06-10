#include <iostream>
using namespace std;

int main()
{
    int n, pencacah;
    double bil, jum, rata_rata;

    cout << "Jumlah data = ";
    cin >> n;

    jum = 0;
    pencacah = 1;
    while (pencacah <= n)
    {
        cout << "Bilangan " << pencacah << " = ";
        cin >> bil;

        jum = jum + bil;
        pencacah = pencacah + 1;
    }

    rata_rata = jum / n;

    cout << "Rata-rata = " << rata_rata << endl;

    return 0;
}