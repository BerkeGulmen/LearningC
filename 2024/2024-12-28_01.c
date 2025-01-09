/*
Kullanıcıdan alınan sayının rakamlarında, ardışık olarak en fazla tekrar eden rakamı ve tekrar sayısını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, e, f, g;
    scanf ("%d%*c", &a);
    c = a;
    for (b = 1; ; ++ b) {
        if (a < 10) {
            break;
        }
        a /= 10;
    }
    int * d;
    d = (int *) calloc (b, sizeof (int));
    for (a = 0; a < b; ++ a) {
        * (d + a) = c % 10;
        c /= 10;
    }
    for (a = 0; a < b; ++ a) {
        printf ("%d ", * (d + a));
    }
    printf ("\n");
    for (a = 0, e = 0, g = 0; a < b; ++ a) {
        for (c = 0, f = 0; c < b; ++ c) {
            if (a == 0) {
                if (* (d + a) == * (d + c)) {
                    ++ e;
                }
            }
            if (a != 0) {
                if (* (d + a) == * (d + c)) {
                    ++ f;
                }
            }
        }
        if (e < f) {
            e = f;
            g = a;
        }
    }
    printf ("%d %d\n", e, * (d + g));
    free (d);
    return EXIT_SUCCESS;
}
