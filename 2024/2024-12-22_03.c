/*
Kullanıcının kaç adet sayı gireceği sorulur. Girdiği sayılardan hangileri Fibonacci sayısıdır?
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f;
    scanf ("%d%*c", &a);
    for (e = 0; e < a; ++ e) {
        scanf ("%d%*c", &f);
        for (b = 0, c = 1, d = 0; b <= f;) {
            b = d;
            if (b == f) {
                printf ("%d ", f);
                break;
            }
            d = c;
            c = b + d;
        }
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
