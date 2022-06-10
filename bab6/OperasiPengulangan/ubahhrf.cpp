#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i;
    char string[80];
    char kar;

    cout << "Masukkan sebarang string:\n ";
    cin.getline(string, 79);

    for (i = 0; i < (int)strlen(string); i++)
    {
        kar = string[i];
        if ((kar >= 'A') && (kar <= 'Z'))
            cout << (char)(kar + 32);
        else if ((kar >= 'a') && (kar <= 'z'))
            cout << (char)(kar - 32);
        else
            cout << kar;
    }

    cout << endl;

    return 0;
}
