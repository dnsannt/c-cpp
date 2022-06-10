/* Koefisien binomial */
#include <stdio.h>

int binom(int n, int k)
{
    if (k == 0)
        return 1;
    else if (k == n)
        return 1;
    else
        return binom(n - 1, k - 1) + binom(n - 1, k);
}
int main()
{
    printf("%ld\n", binom(1, 1));
    printf("%ld\n", binom(5, 3));

    return 0;
}