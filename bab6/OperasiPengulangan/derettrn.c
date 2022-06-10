#include <stdio.h>

int main()
{
    int bil;

    bil = 10;
    while (bil >= 1)
    {
        printf("%d\n", bil);
        bil = bil - 1;
    }

    return 0;
}