/*
Kullanıcıdan kaç adet sayı gireceği sorulur. Girdiği sayılardan hangileri asal sayıdır?
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, e;
    int * d;
    scanf ("%d%*c", &a);
    d = (int *) calloc (a, sizeof (int));
    for (b = 0; b < a; ++ b) {
        scanf ("%d%*c", &* (d + b));
    }
    for (b = 0; b < a; ++ b) {
        for (c = 2, e = 0; c < * (d + b); ++ c) {
            if ((* (d + b) % c) == 0) {
                e = 1;
                break;
            }
        }
        if (e == 0) {
            printf ("%d ", * (d + b));
        }
    }
    return EXIT_SUCCESS;
}
