#include <stdio.h>

int main()
{
    int bilangan;

    printf("Masukan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0)
        printf("Bilangan genap");
    else
        printf("Bilangan ganjil");

    return 0;
}
