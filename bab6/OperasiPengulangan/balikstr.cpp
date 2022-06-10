#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string[80];
    int indeks;
    cout << "Masukkan suatau string: ";
    cin >> string;

    indeks = strlen(string) - 1;
    while (indeks >= 0)
    {
        cout << string[indeks];
        indeks = indeks - 1;
    }

    cout << endl; // Pindah baris

    return 0;
}