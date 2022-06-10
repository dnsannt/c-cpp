#include <stdio.h>

int main()
{
    int n, pencacah, nilai;

    printf("Data pembatas = ");
    scanf("%d", &n);

    pencacah = 1;
    nilai = 1;

    while (nilai <= n)
    {
        printf("%d ", nilai);
        nilai = nilai + pencacah;
        pencacah = pencacah + 1;
    }

    printf("\n"); /* Pindah baris */

    return 0;
}