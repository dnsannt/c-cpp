#include <iostream>
using namespace std;

int main()
{
    double jum;
    int pencacah, bil;

    for (bil = 1; bil <= 99; bil++)
    {
        jum = jum + (double)bil / (bil + 1);
    }

    cout << "Jumlah = " << jum << endl;
}