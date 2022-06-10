#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int bil = 23;
    char st[] = "Halo";

    cout << bil << endl;
    cout << setw(4) << bil << endl;
    cout << setw(5) << bil << endl;

    cout << bil << endl;
    cout << setw(6) << setfill(' ') << bil << endl;
    cout << setw(7) << setfill('*') << bil << endl;

    cout << st << endl;
    cout << setw(6) << setfill(' ') << st << endl;
    cout << setw(7) << setfill('*') << st << endl;

    return 0;
}