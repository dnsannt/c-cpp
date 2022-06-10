#include <stdio.h>
#include <string.h>

int main()
{
    int i, jum;
    char string[80];
    char kar;

    printf("Masukkan sebarang string: ");
    gets(string);

    jum = 0;
    for (i = 0; i < (int)strlen(string); i++)
    {
        kar = string[i];
        if ((kar >= 'A') && (kar <= 'Z'))
            jum++;
    }

    printf("Jumlah huruf kapital = %d\n", jum);

    return 0;
}