#include <stdio.h>
int main()
{
    int n, pencacah, jum;

    printf("n = ");
    scanf("%d", &n);

    jum = 0;
    pencacah = 1;
    while (pencacah <= n)
    {
        jum = jum + pencacah;
        pencacah = pencacah + 1;
    }

    printf("Jumlah = %d\n", jum);

    return 0;
}