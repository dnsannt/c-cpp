#include <stdio.h>

int main()
{
    int bil, jum, i;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bil);

    jum = 0;
    for (i = 1; i <= bil; i++)
        if (bil % i == 0)
            jum++;

    if (jum == 2)
        printf("Bilangan prima\n");
    else
        printf("Bukan bilangan prima\n");

    return 0;
}