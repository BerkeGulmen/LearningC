/*
Kullanıcıdan alınan iki sayının aralarında asal olup olmadığını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f = 0;
    scanf ("%d %d%*c", &a, &b);
    if (a < b) {
        c = a;
        d = b;
    }
    else {
        c = b;
        d = a;
    }
    for (e = 2; e <= c; ++ e) {
        if ((c % e) == 0 && (d % e) == 0) {
            printf ("BOTH NOT PRIME\n");
            f = 1;
            break;
        }
    }
    if (f == 0) {
        printf ("BOTH PRIME\n");
    }
    return EXIT_SUCCESS;
}
