/* Menuliskan elemen larik dari belakang */
#include <stdio.h>

int main()
{
    int data[] = {8, 9, 4, 7, 6, 1, 5, 3};
    int i;
    for (i = 7; i > 0; i--)
        printf("%d ", data[i]);

    printf("\n");

    return 0;
}