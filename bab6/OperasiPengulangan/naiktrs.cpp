#include <iostream>
using namespace std;

int main()
{
    int n, pencacah, nilai;

    cout << "Data pembatas = ";
    cin >> n;

    pencacah = 1;
    nilai = 1;
    while (nilai <= n)
    {
        cout << nilai << " ";
        nilai = nilai + pencacah;
        pencacah = pencacah + 1;
    }

    cout << endl; // Pindah baris

    return 0;
}