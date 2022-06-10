/* Fungsi fibonacci */
#include <stdio.h>

long int fib(unsigned int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int bil, n;
    long int hasil;

    printf("n = ");
    scanf("%d", &n);

    hasil = fib(n);

    printf("fib(%d) = %1d", n, hasil);

    return 0;
}