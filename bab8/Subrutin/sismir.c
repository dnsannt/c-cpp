/* subrutin untuk menghitung sisi miring segitiga siku */
#include <stdio.h>
#include <math.h>

double sisi_miring(double x, double y)
{
    return sqrt(x * x + y * y);
}
int main()
{
    printf("%lf\n", sisi_miring(3, 4));

    return 0;
}