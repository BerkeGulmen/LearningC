/*
Kullanıcının kaç adet sayı gireceği sorulur. Girdiği sayılardan hangileri Fibonacci sayısıdır?
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, f;
    int * e;
    scanf ("%d%*c", &a);
    e = (int *) calloc (a, sizeof (int));
    for (b = 0; b < a; ++ b) {
        scanf ("%d%*c", &* (e + b));
    }
    for (b = 1, c = 1, d = 0; b <= 10000;) {
        d = b;
        for (f = 0; f < a; ++ f) {
            if (* (e + f) == b) {
                printf ("%d ", b);
            }
        }
        b += c;
        c = d;
    }
    printf ("\n");
    free (e);
    return EXIT_SUCCESS;
}
