#include <stdio.h>

int main()
{
    char kar[5];
    int i;

    kar[0] = 'A';
    kar[1] = 'E';
    kar[2] = 'I';
    kar[3] = 'O';
    kar[4] = 'U';

    for (i = 0; i < 5; i++)
        printf("%c\n", kar[i]);
    return 0;
}