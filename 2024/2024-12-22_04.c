/*
Kullanıcıdan kaç adet sayı gireceği sorulur. Girdiği sayılardan hangileri asal sayıdır?
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0; b < a; ++ b) {
        scanf ("%d%*c", &c);
        for (d = 2, e = 0; d < c; ++ d) {
            if (c == 1 || c == 0) {
                e = 1;
                break;
            }
            if (c == 2) {
                printf ("%d ", c);
                e = 1;
                break;
            }
            if ((c % d) == 0) {
                e = 1;
                break;
            }
        }
        if (e == 0) {
            printf ("%d ", c);
        }
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
