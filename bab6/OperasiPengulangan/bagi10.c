#include <stdio.h>

int main()
{
    long int nilai;

    nilai = 100000000;
    while (nilai >= 1)
    {
        printf("%ld\n", nilai);
        nilai = nilai / 10;
    }

    return 0;
}