#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char info[25] = "Nama: David Beckam";
    cout << info;

    cout << endl;

    strcpy(info, "Info: Pemain Sepakbola");
    cout << info;

    return 0;
}