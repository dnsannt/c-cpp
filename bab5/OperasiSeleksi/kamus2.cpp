#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char kata_inggris[32];

    cout << "Kata (one, two, atau three): ";
    cin >> kata_inggris;

    // Ubah setiap huruf kapital ke huruf kecil
    for (int i = 0; i < strlen(kata_inggris); i++)
        kata_inggris[i] = tolower(kata_inggris[i]);

    // Lakukan pembandingan
    if (strcmp(kata_inggris, "one") == 0)
        cout << "satu" << endl;
    else if (strcmp(kata_inggris, "two") == 0)
        cout << "dua" << endl;
    else if (strcmp(kata_inggris, "three") == 0)
        cout << "three" << endl;
    else
        cout << "Maaf, saya tidak tahu" << endl;

    return 0;
}