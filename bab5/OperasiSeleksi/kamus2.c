#include <stdio.h>
#include <string.h>

int main()
{
    char kata_inggris[32];
    int i;

    printf("Kata (one, two, atau three): ");
    scanf("%s", kata_inggris);

    // Ubah setiap huruf kapital ke huruf kecil
    for (i = 0; i < strlen(kata_inggris); i++)
        kata_inggris[i] = tolower(kata_inggris[i]);

    // Proses pembandingan
    if (strcmp(kata_inggris, "one") == 0)
        printf("satu\n");
    else if (strcmp(kata_inggris, "two") == 0)
        printf("dua\n");
    else if (strcmp(kata_inggris, "three") == 0)
        printf("tiga\n");
    else
        printf("Maaf, saya tidak tahu\n");

    return 0;
}