// Menuliskan elemen larik dari belakang //
#include <iostream>
using namespace std;

int main()
{
    int data[] = {8, 9, 4, 7, 6, 1, 5, 3};
    int i;
    for (i = 7; i > 0; i--)
        cout << data[i] << " ";

    cout << endl;

    return 0;
}