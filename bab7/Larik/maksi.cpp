#include <iostream>
using namespace std;

int main()
{
    int data[] = {10, 4, 2, 5, 3, 8, 9, 2, 9, 5};
    int i;
    int terbesar;

    terbesar = data[0];
    for (i = 1; i < 10; i++)
        if (data[i] > terbesar)
            terbesar = data[i];
    
    cout << "Terbesar = " << terbesar << endl;

    return 0;
}