#include <iostream>
using namespace std;

int main()
{
    int bil;

    for (bil = 1; bil <= 25; bil++)
    {
        if (bil % 5 != 0)
            cout << bil << " ";
    }

    cout << endl; // Pindah halaman

    return 0;
}