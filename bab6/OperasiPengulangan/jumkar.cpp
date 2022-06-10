#include <iostream>
using namespace std;

int main()
{
    char string[80];
    int indeks;

    cout << "Masukkan suatu string: ";
    cin.getline(string, 80); // Membaca string

    indeks = 0;
    while (string[indeks] != '\0')
    {
        indeks = indeks + 1;
    }

    cout << "Jumlah karakter = " << indeks << endl;

    return 0;
}