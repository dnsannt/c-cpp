// Subrutin untuk menentukan suatu bilangan genap / ganjil
#include <iostream>
using namespace std;

int ganjil(int bil)
{
    if (bil % 2 == 1)
        return 1;
    else
        return 0;
}

int main()
{
    cout << ganjil(5) << endl;
    cout << ganjil(6) << endl;
    cout << ganjil(8) << endl;

    return 0;
}