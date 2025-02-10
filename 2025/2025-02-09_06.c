/*
Kullanıcıdan alınan sayının rakamlarında, ardışık olarak en fazla tekrar eden rakamı ve tekrar sayısını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, e, f, g, h;
    int * d;
    scanf ("%d%*c", &a);
    c = a;
    for (b = 1; ; ++ b) {
        if (a < 10) {
            break;
        }
        a /= 10;
    }
    d = (int *) calloc (b, sizeof (int));
    e = b;
    a = c;
    for (b = 0; ; ++ b) {
        * (d + b) = (a % 10);
        a /= 10;
        if (a < 10) {
            break;
        }
    }
    * (d + b + 1) = (a % 10);
    for (b = 0, h = 0, f = 0; b < e; ++ b) {
        for (c = 1, g = b; ; ++ c, ++ g) {
            if (* (d + g) != * (d + g + 1)) {
                break;
            }
        }
        if (f < c) {
            f = c;
            h = * (d + b);
        }
    }
    printf ("%d %d\n", h, f);
    return EXIT_SUCCESS;
}
