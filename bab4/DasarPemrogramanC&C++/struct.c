#include <stdio.h>
#include <string.h>

struct data_pegawai
{
    int nip;
    char nama[25];
    long int gaji;
};

int main()
{
    struct data_pegawai  peg;
    peg.nip = 4567;
    strcpy(peg.nama, "Audi Febrianti");
    peg.gaji = 120000L;

    printf("NIP : %d\n", peg.nip);
    printf("Nama : %-s\n", peg.nama);
    printf("Gaji : %1d\n", peg.gaji);

    return 0;
}