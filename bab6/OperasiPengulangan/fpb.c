#include <stdio.h>

int main()
{
    int m, n, r;

    printf("Masukkan m: ");
    scanf("%d", &m);

    printf("Masukkan n: ");
    scanf("%d", &n);

    r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }

    printf("FPB: %d\n", n);

    return 0;
}