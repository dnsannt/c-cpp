#include <stdio.h>
#include <string.h> /* prototipe strlen */

int main()
{
    char string[80];
    int indeks;

    printf("Masukkan suatu string: ");
    gets(string);

    indeks = strlen(string) - 1;
    while (indeks >= 0)
    {
        printf("%c", string[indeks]);
        indeks = indeks - 1;
    }

    printf("\n"); /* Pindah baris */

    return 0;
}