/*
Toplam, 1'den N'e kadar, 1/N hesapla ve sonucu ekrana yazdır.
(1 / 1) + (1 / 2) + (1 / 3) + (1 / 4) + (1 / 5) ... + (1 / N)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    double a, b, c;
    scanf ("%lf%*c", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        c += (1 / b);
    }
    printf ("%lf\n", c);
    return EXIT_SUCCESS;
}
