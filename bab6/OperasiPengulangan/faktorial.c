#include <stdio.h>

int main()
{
    int bil, n;
    long int hasil;

    printf("n = ");
    scanf("%d", &n);
    hasil = 1;
    for (bil = n; bil >= 1; bil--)
    {
        hasil = hasil * bil;
    }

    printf("n! = %ld", hasil);

    return 0;
}