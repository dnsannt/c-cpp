#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char info[25];
    strcpy(info, "Nama: David Beckam");
    cout << info;

    cout << endl;

    strcpy(info, "Pemain: Pemain Sepakbola");
    cout << info;

    return 0;
}