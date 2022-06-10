#include <stdio.h>

int main()
{
    int bil;
    bil = 1;
    while (bil <= 10)
    {
        printf("%d ", bil);
        bil = bil + 2;
    }

    printf("\n"); /* Pindah baris */

    return 0;
}