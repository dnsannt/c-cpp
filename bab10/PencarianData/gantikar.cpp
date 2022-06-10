// Subrutin bernama gantikar uang menerima tiga argumen
// Argumen pertama berupa suatu string yang menjadi sumber data bagi penggantian karakter
// Argumen kedua berupa sebuah karakter
// Argumen ketiga juga berupa sebuah karakter
#include <iostream>
#include <cstring>
using namespace std;

char *gantikar(char st[], char c1, char c2)
{
    int i;
    static char stTemp[80];

    /* Salin string */
    strcpy(stTemp, st);

    /* Proses penggantian karakter */
    for (i = 0; i < strlen(stTemp); i++)
        if (stTemp[i] == c1)
            stTemp[i] = c2;

    return (char *)stTemp;
}

int main()
{
    char kalimat[] = "Bisa! maka kau bisa";

    cout << gantikar(kalimat, 'a', 'A') << "\n";

    return 0;
}
