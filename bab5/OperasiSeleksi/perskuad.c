/* ---------------------------------------------------------------------
    Menentukan akar persamaan kuadrat ax2 +bx + c = 0

    Pada GNU/Linux, kompilasilah dengan memberikan
    perintah:

        gcc -lm perskuad.c -o perskuad
----------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double diskriminan, x1, x2, re, im;

    printf("Persamaan kuadrat\n");
    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    /* Hitung diskriminan */
    diskriminan = b * b - 4 * a * c;
    /* Evaluasi diskriminan */
    if (diskriminan > 0)
    {
        x1 = (-b + sqrt(diskriminan)) / (2 * a);
        x2 = (-b - sqrt(diskriminan)) / (2 * a);
        printf("Akar real:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
    else if (diskriminan == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
        printf("Akar kembar:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
    else /* diskriminan < 0 */
    {
        re = -b / (2 * a);
        im = sqrt(fabs(diskriminan)) / (2 * a);
        printf("Akar kompleks\n");
        printf("x1 = %lf + %lfj\n", re, im);
        printf("x2 = %lf - %lfj\n", re, im);
    }

    return 0;
}