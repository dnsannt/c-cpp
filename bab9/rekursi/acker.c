/* Fungsi ackermann adalah fungsi rekursif dengan dua peubah bilangan bulat yang didefinisikan */
#include <stdio.h>

long int acker(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return acker(m - 1, 1);
    else /* Berarti m <> 0 dan n <> 0 */
        return acker(m - 1, acker(m, n - 1));
}
int main()
{
    printf("%ld\n", acker(0, 5));
    printf("%ld\n", acker(1, 0));
    printf("%ld\n", acker(3, 1));

    return 0;
}
