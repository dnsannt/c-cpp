#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int bil, i, prima;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bil;
    if (bil < 2)
    {
        cout << "Bilangan prima harus lebih besar dari 2"
             << endl;
        exit(1); // Akhiri progam dg nilai keluar = 1
    }
    prima = 1; /* Berarti bilangan prima */
    for (i = 2; i <= bil / 2; i++)
        if (bil % 1 == 0)
        {
            prima = 0; /* Berarti bukan bilangan prima */
            break;     /* Keluar dari for */
        }
    if (prima)
        cout << "Bilangan prima" << endl;
    else
        cout << "Bukan bilangan prima" << endl;

    return 0;
}