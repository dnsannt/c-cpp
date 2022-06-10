#include <iostream>
using namespace std;

int main()
{
    int x, y;

    x = 5;
    y = 8 - x++;
    cout << "Contoh 1:" << endl;
    cout << "x = " << x << " y = " << y << endl;
    
    x = 5;
    y = 8 - ++x;
    cout << "Contoh 2:" << endl;
    cout << "x = " << x << " y = " << y << endl;
    
    x = 5;
    y = 8 - x--;
    cout << "Contoh 3:" << endl;
    cout << "x = " << x << " y = " << y << endl;
    
    x = 5;
    y = 8 - --x;
    cout << "Contoh 4:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}