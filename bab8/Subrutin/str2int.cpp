/* Buatlah subrutin dengan nama str2int dengan argumen berupa suatu
string yang menyatakan bilangan bulat. Nilai baliknya berupa suata
angka yang merupakan hasil konversi string tersebut ke dalam bentuk
bilangan. sekiranya ada karakter yang tidak menyiratkan bilangan dalam
string argumen, subrutin memberikan nilai balik berupa nol. tanda plus
dan negatif boleh disertakan dalam argumen */
#include <iostream>
#include <cstring>
using namespace std;

long str2int(char *st)
{
    bool ok;
    int i;
    int digit;
    long int hasil;
    long int pengali;
    long int bilangan;

    /* Cek apakah string kosong */
    if (strlen(st) == 0)
        return 0;

    /* Cek apakah string berisi karakter yang valid untuk bilangan */
    ok = true;

    if (!(st[0] == '+' || st[0] == '-' ||
          (st[0] >= '0' && st[0] <= '9')))
        ok = false;
    else
    {
        for (i = 1; i < strlen(st); i++)
            if (!(st[i] >= '0' && (st[i] <= '9')))
            {
                ok = false;
                break;
            }
    }
    if (!ok)
        return 0;

    /* Konversi string ke angka */
    bilangan = 0;
    pengali = 1;
    for (i = strlen(st) - 1; i >= 0; i--)
    {
        switch (st[i])
        {
        case '0':
            digit = 0;
            break;
        case '1':
            digit = 1;
            break;
        case '2':
            digit = 2;
            break;
        case '3':
            digit = 3;
            break;
        case '4':
            digit = 4;
            break;
        case '5':
            digit = 5;
            break;
        case '6':
            digit = 6;
            break;
        case '7':
            digit = 7;
            break;
        case '8':
            digit = 8;
            break;
        case '9':
            digit = 9;
            break;
        case '-':
            digit = -1;
            break;
        case '+':
            digit = 0;
        }

        if (digit != -1)
        {
            bilangan = bilangan + digit * pengali;
            pengali = pengali * 10;
        }
        else
            bilangan = -bilangan;
    }

    return bilangan;
}

int main()
{
    cout << str2int("1234567") << endl;
    cout << str2int("-1234567") << endl;
    cout << str2int("1.234.567") << endl;

    return 0;
}