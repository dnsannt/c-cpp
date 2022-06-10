#include <iostream>
using namespace std;

int main() 
{
    long int nilai;

    nilai = 100000000;
    while (nilai >= 1)
    {
        cout << nilai << "\n";
        nilai = nilai / 10;
    }

    return 0;
}