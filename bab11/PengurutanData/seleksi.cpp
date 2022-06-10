#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;
}

void selection_sort(int data[], int n)
{
    int posMin, posAwal, j, tmp;

    for (posAwal = 0; posAwal < n - 1; posAwal++)
    {
        posMin = posAwal;
        for (j = posAwal + 1; j < n; j++)
            if (data[posMin] > data[j])
                posMin = j;

        /* Tukarkan */
        tmp = data[posAwal];
        data[posAwal] = data[posMin];
        data[posMin] = tmp;

        cout << "Hasil posAwal= " << posAwal << ": ";
        tampilkan_larik(data, n);
    }
}

int main()
{
    const int JUM_DATA = 8;

    int i;
    int data[] = {25, 57, 48, 37, 12, 92, 80, 33};

    selection_sort(data, JUM_DATA);

    /*Hasil pengurutan */
    cout << "Hasil pengurutan:\n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}