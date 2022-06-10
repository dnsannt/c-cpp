#include <stdio.h>

int main()
{
    int tahun;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if (tahun % 4 != 0)
        printf("Bukan kabisat\n");
    else if ((tahun % 100 == 0) && (tahun % 400 != 0))
        printf("Bukan kabisat\n");
    else
        printf("Kabisat\n");

    return 0;
}