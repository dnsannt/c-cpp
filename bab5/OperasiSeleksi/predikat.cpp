#include <iostream>
using namespace std;

int main()
{
    double ip;

    cout << "IP Kumulatif: ";
    cin >> ip;

    if (ip >= 2.00 && ip <= 2.75)
        cout << "Lulus Memuaskan" << endl;
    else if (ip > 2.75 && ip <= 3.50)
        cout << "Lulus Sangat Memuaskan" << endl;
    else if (ip > 3.50 && ip <= 4.00)
        cout << "Lulus dengan pujian" << endl;
    else
        cout << "Data IP tidak valid" << endl;

    return 0;
}