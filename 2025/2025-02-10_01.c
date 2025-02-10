/*
Kullanıcıdan alınan sayının palindromic numara olup olmadığını yaz. (9527259, 60133106, 4021204...)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int * a, b, c, d, e, f, g;
    scanf ("%d%*c", &b);
    d = b;
    f = b;
    for (c = 1; ; ++ c) {
        if (b < 10) {
            break;
        }
        b /= 10;
    }
    b = f;
    a = (int *) calloc (c, sizeof (int));
    for (g = 0; g < c; ++ g) {
        * (a + g) = (d % 10);
        d /= 10;
    }
    d = f;
    for (g = 0, b = (c - 1), e = 0; g < (c / 2); ++ g, -- b) {
        if (* (a + g) != * (a + b)) {
            printf ("Not palindromic number: %d\n", f);
            e = 1;
            break;
        }
    }
    if (e == 0) {
        printf ("Palindromic number: %d\n", f);
    }
    return EXIT_SUCCESS;
}
