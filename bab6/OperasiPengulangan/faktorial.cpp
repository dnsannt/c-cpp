#include <iostream>
using namespace std;

int main()
{
    int bil, n;
    long int hasil;

    cout << "n = ";
    cin >> n;

    hasil = 1;
    for (bil = n; bil >= 1; bil--)
    {
        hasil = hasil * bil;
    }

    cout << "n! = " << hasil << endl;
    
    return 0;
}