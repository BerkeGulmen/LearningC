/*
Kullanıcıdan alınan iki sayının aralarında asal olup olmadığını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d %d%*c", &a, &b);
    for (c = 2, d = 0; c <= a || c <= b; ++ c) {
        if ((a % c) == 0 && (b % c) == 0) {
            printf ("Not prime among them.\n");
            d = 1;
            break;
        }
    }
    if (d == 0) {
        printf ("Prime among them.\n");
    }
    return EXIT_SUCCESS;
}
