/*
Kullanıcıdan alınan 3 sayının EBOB ve EKOK değerlerini bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f, g, h;
    scanf ("%d%*c", &a);
    e = a;
    scanf ("%d%*c", &b);
    if (e < b) {
        e = b;
    }
    scanf ("%d%*c", &c);
    if (e < c) {
        e = c;
    }
    for (d = 2, f = 0; d < e; ++ d) {
        if ((a % d) == 0 && (b % d) == 0 && (c % d) == 0) {
            if (f < d) {
                f = d;
            }
        }
    }
    for (h = 2, g = 1; h < e; ++ h) {
        if ((a % h) == 0 || (b % h) == 0 || (c % h) == 0) {
            if ((a % h) == 0) {
                a /= h;
            }
            if ((b % h) == 0) {
                b /= h;
            }
            if ((c % h) == 0) {
                c /= h;
            }
            g = g * h;
            h = 2;
        }
    }
    printf ("%d %d\n", f, g);
    return EXIT_SUCCESS;
}
