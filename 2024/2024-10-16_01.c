//Kullanıcıdan alınan sayının palindromic numara olup olmadığını yaz. (9527259, 60133106, 4021204...)
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, c, d, f;
    int * b;
    scanf ("%d%*c", &a);
    d = a;
    for (f = 1; ; ++ f) {
        if (a < 10) {
            break;
        }
        a /= 10;
    }
    b = (int *) calloc (f, sizeof (int));
    a = d;
    for (c = 0; c < f; ++ c) {
        * (b + c) = a % 10;
        a /= 10;
    }
    for (c = 0, a = f - 1, d = 0; c < (f / 2); ++ c, -- a) {
        if (* (b + c) != * (b + a)) {
            printf ("Not palindromic.\n");
            d = 1;
            break;
        }
    }
    if (d == 0) {
        printf ("Palindromic.\n");
    }
    free (b);
    return EXIT_SUCCESS;
}
