#include <iostream>
#include <cstring>
using namespace std;

struct data_pegawai
{
    int nip;
    char nama[25];
    long int gaji;
};

int main()
{
    struct data_pegawai peg;
    peg.nip = 4567;
    strcpy(peg.nama, "Audi Febrianti");
    peg.gaji = 1200000L;
    
    cout << "NIP : " << peg.nip << endl;
    cout << "Nama : " << peg.nama << endl;
    cout << "Gaji : " << peg.gaji << endl;
    
    return 0;
}