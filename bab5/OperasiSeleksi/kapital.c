#include <stdio.h>

int main()
{
    char karakter;

    printf("Masukkan sebuah karakter: ");
    scanf("%c", &karakter);

    if (karakter >= 'A' && karakter <= 'Z')
        printf("%c termasuk huruf kapital\n", karakter);
    else
        printf("%c Bukan huruf kapital\n", karakter);

    return 0;
}
