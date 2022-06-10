// subrutin untuk menghitiung sisi miring segitiga siku
#include <iostream>
#include <cmath>
using namespace std;

double sisi_miring(double x, double y)
{
    return sqrt(x * x + y * y);
}
int main()
{
    cout << sisi_miring(3, 4) << endl;

    return 0;
}