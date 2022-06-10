#include <stdio.h>

int main()
{
    int data[] = {10, 4, 2, 5, 3, 8, 9, 2, 9, 5};
    int i;
    int terbesar;

    terbesar = data[0];
    for (i = 1; i < 10; i++)
        if (data[i] > terbesar)
            terbesar = data[i];

    printf("Terbesar = %d\n", terbesar);

    return 0;
}