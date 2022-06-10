#include <iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "Masukkan nilai ujian: ";
    cin >> nilai;

    if (nilai >= 50 && nilai <= 100)
        cout << "Absah" << endl;
    else
        cout << "Tidak absah" << endl;

    return 0;
}
