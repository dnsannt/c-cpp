#include <stdio.h>

int main()
{
    char nama[35];

    printf("Nama Anda: ");
    gets(nama);

    printf("Hai, %s, Selamat belajar C\n", nama);

    return 0;
}
