#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        cout << data[i] << " ";

    cout << endl;
}

int partisi(int data[], int p, int r)
{
    int pivot = data[r];
    int i = p - 1;
    int j;
    for (j = p; j < r; j++)
    {
        if (data[j] <= pivot)
        {
            i++;
            int tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
        }
    }
    int tmp = data[i + 1];
    data[i + 1] = data[r];
    data[r] = tmp;

    return i + 1;
}

void quick_sort(int data[], int p, int r)
{
    int q;

    if (p < r)
    {
        q = partisi(data, p, r);
        quick_sort(data, p, q - 1);
        quick_sort(data, q + 1, r);
    }
}

int main()
{
    const int JUM_DATA = 9;

    int i;
    int data[] = {25, 57, 48, 37, 12, 92, 80, 33, 1};

    quick_sort(data, 0, JUM_DATA - 1);

    /* Hasil pengurutan */
    cout << "Hasil pengurutan:\n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}