#include <stdio.h>

int main()
{
    double nilai;

    printf("Masukkan nilai ujian: ");
    scanf("%lf", &nilai);

    if (nilai >= 50 && nilai <= 100)
        printf("Absah\n");
    else
        printf("Tidak absah\n");

    return 0;
}
