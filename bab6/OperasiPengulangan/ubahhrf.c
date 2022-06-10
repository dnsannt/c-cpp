#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char string[80];
    char kar;

    printf("Masukkan sebarang string:\n");
    gets(string);

    for (i = 0; i < (int)strlen(string); i++)
    {
        kar = string[i];
        if ((kar >= 'A') && (kar <= 'Z'))
            printf("%c", (char)(kar + 32));
        else if ((kar >= 'a') && (kar <= 'z'))
            printf("%c", (char)(kar - 32));
        else
            printf("%c", kar);
    }

    printf("\n");

    return 0;
}