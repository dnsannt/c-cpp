#include <stdio.h>
#include <stdlib.h> // Prototipe untuk exit()

int main()
{
    int bil, i, prima;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bil);

    if (bil < 2)
    {
        printf("Bilangan harus lebih besar dari 2\n");
        exit(1); /* Akhiri program dg nilai keluar = 1 */
    }

    prima = 1; /* Berarti bilangan prima */
    for (i = 2; i <= bil / 2; i++)
        if (bil % i == 0)
        {
            prima = 0; /* Berarti bukan bilangan prima */
            break;
        }
    if (prima)
        printf("Bilangan prima\n");
    else
        printf("Bukan bilangan prima\n");

    return 0;
}