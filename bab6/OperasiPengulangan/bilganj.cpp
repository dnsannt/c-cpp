#include <iostream>
using namespace std;

int main()
{
    int bil;

    bil = 1;
    while (bil <= 10)
    {
        cout << bil << ' ';
        bil = bil + 2;
    }

    cout << endl; // Pindah baris

    return 0;
}