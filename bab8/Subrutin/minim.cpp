// Subrutin untuk menentukan suatu bilangan terkecil dalam suatu larik //
#include <iostream>
using namespace std;

double terkecil(double x[], int jum)
{
    int i;
    double min;

    min = x[0];
    for (i = 1; i < jum; i++)
        if (x[i] < min)
            min = x[i];
}

int main()
{
    double y;
    double data[] = {578, 57.8, 2.3, 24, 123.5};

    y = terkecil(data, 5);

    cout << "Terkecil = " << y << endl;

    return 0;
}