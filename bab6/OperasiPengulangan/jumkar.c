#include <stdio.h>

int main()
{
    char string[80];
    int indeks;

    printf("Masukkan suatu string: ");
    gets(string);

    indeks = 0;
    while (string[indeks] != '\0')
    {
        indeks = indeks + 1;
    }

    printf("Jumlah karakter = %d\n", indeks);

    return 0;
}