// Menampilkan negara dan ibukota //
#include <iostream>
using namespace std;

int main()
{
    char negara[5][2][15] = {{"Indonesia", "Jakarta"},
                             {"Filipina", "Manila"},
                             {"Austria", "Wina"},
                             {"India", "New Delhi"},
                             {"Iran", "Taheran"}};

    for (int baris = 0; baris < 5; baris++)
        if (negara[baris][0][0] == 'I')
            cout << negara[baris][0] << " - "
                 << negara[baris][1] << "\n";

    return 0;
}