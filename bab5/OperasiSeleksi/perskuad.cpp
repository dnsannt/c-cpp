#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double diskriminan, x1, x2, re, im;

    cout << "Persamaan kuadrat" << endl;
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    // Hitung diskriminan
    if (diskriminan > 0)
    {
        x1 = (-b + sqrt(diskriminan)) / (2 * a);
        x2 = (-b - sqrt(diskriminan)) / (2 * a);
        cout << "Akar real:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (diskriminan == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
        cout << "Akar kembar:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else /* diskriminan < 0 */
    {
        re = -b / (2 * a);
        im = sqrt(fabs(diskriminan)) / (2 * a);
        cout << "Akar kompleks" << endl;
        cout << "x1 = " << re << " + " << im << endl;
        cout << "x2 = " << re << " - " << im << endl;
    }

    return 0;
}