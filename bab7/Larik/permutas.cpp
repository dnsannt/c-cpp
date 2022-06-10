// Menampilkan permutasi tiga orang //
#include <iostream>
using namespace std;

int main()
{
    char nama[][10] = {"Budi", "Andin", "Permana"};
    int i, j, k;

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            if (i != j)
                for (k = 0; k <= 2; k++)
                    if (i != k && j != k)
                        cout << nama[i] << '-'
                             << nama[j] << '-' << nama[k] << endl;

    return 0;
}
