/* Menguji fungsi kanan */
#include <stdio.h>
#include <string.h>

char *kanan(char st[], int n)
{
    int indeks, i, panjang;
    static char strtemp[80];

    panjang = strlen(st);
    if (n > panjang)
        n = panjang;

    i = 0;
    for (indeks = panjang - n; indeks < panjang; indeks++)
    {
        strtemp[i] = st[indeks];
        i++;
    }

    strtemp[i + 1] = 0;
    return (char *)strtemp;
}

int main()
{
    printf("%s\n", kanan("Devi Sinta", 5));
    printf("%s\n", kanan("Devi Sinta", 9));
    printf("%s\n", kanan("Devi Sinta", 15));

    return 0;
}