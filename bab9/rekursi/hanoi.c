/* Permainan menara hanoi ini dibuat  menggunakan
rekrusi yang dapat di lihat pada void hanoi */
#include <stdio.h>

void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
        printf("Pindahkan piring dari %c ke %c\n", a, c);
    else
    {
        hanoi(n - 1, a, c, b);
        hanoi(1, a, b, c);
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int jum_piring;

    printf("Jumlah piring: ");
    scanf("%d", &jum_piring);

    hanoi(jum_piring, 'A', 'B', 'C');

    return 0;
}