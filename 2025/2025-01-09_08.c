/*
Kullanıcıdan alınan 3 sayının EBOB ve EKOK değerlerini bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f, g, h, i;
    scanf ("%d %d %d%*c", &a, &b, &c);
    f = a;
    g = b;
    h = c;
    for (d = 2, e = 1; ; ++ d) {
        if (a == 1 && b == 1 && c == 1) {
            break;
        }
        if ((a % d) == 0 && (b % d) == 0 && (c % d) == 0) {
            e *= d;
            if (a != 1) {
                a /= d;
            }
            if (b != 1) {
                b /= d;
            }
            if (c != 1) {
                c /= d;
            }
            d = 2;
        }
    }
    a = f;
    b = g;
    c = h;
    for (d = 2, i = 1; ; ++ d) {
        if (a == 1 && b == 1 && c == 1) {
            break;
        }
        if ((a % d) == 0 || (b % d) == 0 || (c % d) == 0) {
            if ((a % d) == 0 && a != 1) {
                a /= d;
                i *= d;
            }
            if ((b % d) == 0 && b != 1) {
                b /= d;
                i *= d;
            }
            if ((c % d) == 0 && c != 1) {
                c /= d;
                i *= d;
            }
        }
    }
    printf ("%d %d\n", e, i);
    return EXIT_SUCCESS;
}
