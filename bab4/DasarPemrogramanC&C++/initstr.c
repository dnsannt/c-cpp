#include <stdio.h>
#include <string.h>

int main()
{
    char info[25] = "Nama: David Beckam";
    printf(info);

    printf("\n");

    strcpy(info, "Info: Pemain Sepakbola");
    printf(info);

    return 0;
}