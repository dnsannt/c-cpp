#include <iostream>
using namespace std;

int main()
{
    int fn, fn1, fn2;

    fn1 = 1;
    fn2 = 1;
    cout << 1 << " ";
    cout << 1 << " ";

    fn = fn1 + fn2;
    while (fn <= 200)
    {
        cout << fn << " ";
        fn2 = fn1;
        fn1 = fn;
        fn = fn1 + fn2;
    }

    cout << endl; // Pindah baris

    return 0;
}