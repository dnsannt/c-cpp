#include <iostream>
using namespace std;

int main()
{
    int bil, jum, i;

    cout << "Masukkan sebuah bilangan bulat positif: ";
    cin >> bil;

    jum = 0;
    for (i = 1; i <= bil; i++)
        if (bil % i == 0)
            jum++;

    if (jum == 2)
        cout << "Bilangan prima" << endl;
    else
        cout << "Bukan bilangan prima" << endl;

    return 0;
}