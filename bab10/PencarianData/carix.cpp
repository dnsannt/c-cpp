// Menghitung jumlah suatu bilangan dalam larik
#include <iostream>
using namespace std;

int hitung(int data[], int n, int k)
{
    int jumlah, i, ketemu;

    jumlah = 0;
    for (i = 1; i < n; i++)
        if (data[i] == k)
            jumlah++;

    return jumlah;
}

int main()
{
    int data[8] = {6, 7, 8, 5, 7, 8, 1, 9};
    int dicari = 8;

    cout << "Banyak bilangan " << dicari
         << " dalam larik data: "
         << hitung(data, 8, dicari) << endl;

    return 0;
}