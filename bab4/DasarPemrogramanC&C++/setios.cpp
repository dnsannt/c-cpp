#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double bil = 467856.6784532;

    cout << bil << endl;
    cout << setiosflags(ios::fixed)
         << setw(15)
         << setprecision(2)
         << bil << endl;

    cout << setw(15)
         << setprecision(3)
         << bil << endl;

    cout << setw(15)
         << setprecision(5)
         << bil << endl;

    cout << bil << endl; // Tetap berpresisi 5 digit pecahan

    cout << setiosflags(ios::scientific)
         << bil << endl;

    return 0;
}