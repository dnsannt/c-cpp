// Membalik suatu bilangan dengan cara rekrusi
#include <iostream>
using namespace std;

void balik(long int bil)
{
    long int digitTersisaDiKiri;
    cout << bil % 10;
    digitTersisaDiKiri = bil / 10;
    if (digitTersisaDiKiri != 0)
        balik(digitTersisaDiKiri);
}
int main()
{
    int bil;

    cout << "bilangan bulat = ";
    cin >> bil;

    balik(bil);

    return 0;
}