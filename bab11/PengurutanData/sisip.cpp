#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", data[i]);

    printf("\n");
}

void insertion_sort(int data[], int n)
{
    int i, k;
    int x;
    int ketemu;

    for (k = 1; k < n; k++)
    {
        x = data[k];
        /* Sisipkan x ke dalam data[0..k-1] */
        i = k - 1;
        ketemu = 0;

        while ((i >= 0) && (!ketemu))
        {
            if (x < data[i])
            {
                data[i + 1] = data[i];
                i = i - 1;
            }
            else
                ketemu = 1;

            data[i + 1] = x;
        }
    }
}

int main()
{
    const int JUM_DATA = 8;

    int i;
    int data[] = {25, 57, 48, 37, 12, 92, 80, 33};

    insertion_sort(data, JUM_DATA);

    /* Hasil pengurutan */

    cout << "Hasil pengurutan:\n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}