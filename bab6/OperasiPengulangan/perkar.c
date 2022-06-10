#include <stdio.h>
#include <string.h>

int main()
{
    char string[80];
    int indeks, jum;
    char karakter;

    printf("Masukkan suatu string: ");
    gets(string);

    jum = strlen(string);
    for (indeks = 0; indeks < jum; indeks++)
    {
        karakter = string[indeks];
        printf("%c\n", karakter);
    }

    return 0;
}