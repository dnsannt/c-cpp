#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char kata_inggris[32];

    cout << "Kata (one, two, three): ";
    cin >> kata_inggris;

    if (strcmp(kata_inggris, "one") == 0)
        cout << "satu" << endl;
    else if (strcmp(kata_inggris, "two") == 0)
        cout << "dua" << endl;
    else if (strcmp(kata_inggris, "three") == 0)
        cout << "tiga" << endl;
    else
        cout << "Maaf, saya tidak tahu" << endl;

    return 0;
}