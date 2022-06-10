#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string[80];
    int indeks, jum;
    char karakter;

    cout << "Masukkan suatu string: ";
    cin.getline(string, 80);

    jum = strlen(string);
    for (indeks = 0; indeks < jum; indeks++)
    {
        karakter = string[indeks];
        cout << karakter << endl;
    }

    return 0;
}