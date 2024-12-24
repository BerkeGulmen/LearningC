/*
Kullanıcıdan kaç tane sayı gireceği bilgisi alınır. Kullanıcının girdiği sayıların ortalaması hesaplanarak ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    double a, b, c, d;
    scanf ("%lf%*c", &a);
    for (b = 0, c = 0, d = 0; b < a; ++ b) {
        scanf ("%lf%*c", &d);
        c += d;
    }
    printf ("%lf\n", c / a);
    return EXIT_SUCCESS;
}
