/*
Kullanıcıdan alınan iki sayıyı aralarında asal olasıya kadar sadeleştir.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d %d%*c", &a, &b);
    for (c = 2; c <= a || c <= b; ++ c) {
        if ((a % c) == 0 && (b % c) == 0) {
            a /= c;
            b /= c;
            -- c;
        }
    }
    printf ("%d %d\n", a, b);
    return EXIT_SUCCESS;
}
