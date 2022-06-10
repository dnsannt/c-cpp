#include <stdio.h>

int main()
{
    int fn, fn1, fn2;

    fn1 = 1;
    fn2 = 1;
    printf("%d ", 1);
    printf("%d ", 1);

    fn = fn1 + fn2;
    while (fn <= 200)
    {
        printf("%d ", fn);
        fn2 = fn1;
        fn1 = fn;
        fn = fn1 + fn2;
    }

    printf("\n"); /* Pindah baris */

    return 0;
}