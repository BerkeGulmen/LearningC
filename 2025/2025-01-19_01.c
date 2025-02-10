/*
 Toplamı hesaplayıp ekrana yazdır.
 (1 / (N - 0)) + (2 / (N - 1)) + (3 / (N - 2)) + (4 / (N - 3)) + ... + (N / 1)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    double a, b, c;
    scanf ("%lf%*c", &a);
    for (b = 0, c = 0; b < a; ++ b) {
        c += ((b + 1) / (a - b));
    }
    printf ("%lf\n", c);
    return EXIT_SUCCESS;
}
