#include <stdio.h>
#include <string.h>

int main()
{
    char kata_inggris[32];

    printf("Kata (one, two, atau three): ");
    scanf("%s", kata_inggris);

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