/* Membalik suatu bilangan dengan cara rekrusi */
#include <stdio.h>

void balik(long int bil)
{
    long int digitTersisaDikiri;
    printf("%d", bil % 10);
    digitTersisaDikiri = bil / 10;
    if (digitTersisaDikiri != 0)
        balik(digitTersisaDikiri);
}
int main()
{
    int bil;

    printf("bilangan bulat = ");
    scanf("%d", &bil);

    balik(bil);

    return 0;
}