/* Proses rekrusi pangkat */
#include <stdio.h>

long int pangkat(unsigned int y, unsigned int n)
{
    if (n == 1)
        return y;
    else
        return y * pangkat(y, n - 1);
}
int main()
{
    int y, n;
    long int hasil;

    printf("Menghitung y pangkat n\n");

    printf("y = ");
    scanf("%d", &y);

    printf("n = ");
    scanf("%d", &n);

    hasil = pangkat(y, n);

    printf("%d^%d = %1d", y, n, hasil);

    return 0;
}