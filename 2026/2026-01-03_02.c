/*
Alt dizideki çift sayıların toplamı
Alt dizideki tek sayıların toplamına eşitse dengeli,
dizideki en uzun dengeli dizisinin kac elemanli oldugunu bul.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, *b, c, *d, *e, f, g;
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof (int));
    d = (int *) calloc (a, sizeof (int));
    e = (int *) calloc (a, sizeof (int));
    for (c = 0, f = 0, g = 0; c < a; ++ c) {
        scanf ("%d%*c", &* (b + c));
        if (* (b + c) % 2 == 1) {
            * (d + f) = * (b + c);
            f += 1;
        }
        else {
            * (e + g) = * (b + c);
            g += 1;
        }
    }
    for (c = 0; c < a;) {
        
    }
    return EXIT_SUCCESS;
}
