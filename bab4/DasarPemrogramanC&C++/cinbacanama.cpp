#include <iostream>
using namespace std;

int main()
{
    char nama[35];

    cout << "Nama Anda: ";
    cin.getline(nama, 35);

    cout << "Hai, " << nama << ". Selamat belajar C++\n";

    return 0;
}
