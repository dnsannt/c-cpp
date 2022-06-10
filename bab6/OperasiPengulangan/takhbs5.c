#include <stdio.h>

int main()
{
    int bil;
    {
        for (bil = 1; bil <= 25; bil++)
            if (bil % 5 != 0)
                printf("%d ", bil);
    }

    printf("\n"); /* Pindah halaman */

    return 0;
}
