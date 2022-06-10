#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int bil = 1;
    char st[] = "Berhasil";

    cout << setw(1) << setfill(' ') << bil << endl;
    cout << setw(2) << setfill(' ') << bil << endl;
    cout << setw(3) << setfill(' ') << bil << endl;
    cout << setw(4) << setfill(' ') << bil << endl;
    cout << setw(5) << setfill(' ') << bil << endl;
    cout << setw(6) << setfill(' ') << bil << endl;
    cout << setw(6) << setfill(' ') << bil << endl;
    cout << setw(5) << setfill(' ') << bil << endl;
    cout << setw(4) << setfill(' ') << bil << endl;
    cout << setw(3) << setfill(' ') << bil << endl;
    cout << setw(2) << setfill(' ') << bil << endl;
    cout << setw(1) << setfill(' ') << bil << endl;

    cout << setw(1) << setfill(' ') << st << endl;
    cout << setw(2) << setfill(' ') << st << endl;
    cout << setw(3) << setfill(' ') << st << endl;
    cout << setw(4) << setfill(' ') << st << endl;
    cout << setw(5) << setfill(' ') << st << endl;
    cout << setw(6) << setfill(' ') << st << endl;
    cout << setw(6) << setfill(' ') << st << endl;
    cout << setw(5) << setfill(' ') << st << endl;
    cout << setw(4) << setfill(' ') << st << endl;
    cout << setw(3) << setfill(' ') << st << endl;
    cout << setw(2) << setfill(' ') << st << endl;
    cout << setw(1) << setfill(' ') << st << endl;

    return 0;
}