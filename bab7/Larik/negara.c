/* Menampilkan negara dan ibukota */
#include <stdio.h>

int main()
{
    char negara[5][2][15];
    int baris;

    strcpy(negara[0][0], "Indonesia");
    strcpy(negara[0][1], "Jakarta");
    strcpy(negara[1][0], "Filipina");
    strcpy(negara[1][1], "Manila");
    strcpy(negara[2][0], "Austria");
    strcpy(negara[2][1], "Wina");
    strcpy(negara[3][0], "India");
    strcpy(negara[3][1], "New Delhi");
    strcpy(negara[4][0], "Iran");
    strcpy(negara[4][1], "Taheran");

    for (baris = 0; baris < 5; baris++)
        if (negara[baris][0][0] == 'I')
            printf("%s = %s\n",
                   negara[baris][0], negara[baris][1]);

    return 0;
}