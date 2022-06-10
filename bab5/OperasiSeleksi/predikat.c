#include <stdio.h>

int main()
{
    double ip;

    printf("IP Kumulatif: ");
    scanf("%lf", &ip);

    if (ip >= 2.00 && ip <= 2.75)
        printf("Lulus Memuaskan\n");
    else if (ip > 2.75 && ip <= 3.00)
        printf("Lulus Sangat Memuaskan\n");
    else if (ip > 3.00 && ip <= 4.00)
        printf("Lulus dengan pujian\n");
    else
        printf("Data IP tidak valid\n");

    return 0;
}