/*
 Kullanıcıdan bir sayı al (2 ≤ N ≤ 1000000) ve bu sayının asal çarpan ayrıştırmasını yap.
*/
#include <stdio.h>
#include <stdlib.h>

int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, *b, c, d, e;
    printf ("Enter a number:");
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof (int));
    for (c = 2, d = 0, e = 0; c <= a;) {
        if ((a % c) == 0) {
            d = x (c);
            if (d == 1) {
                * (b + e) = c;
                a /= c;
                ++ e;
                d = 0;
                continue;
            }
        }
        else {
            ++ c;
        }
    }
    for (a = 0, c = 1; a < e; ++ a) {
        if (* (b + a) == * (b + a + 1)) {
            ++ c;
            continue;
        }
        else {
            printf ("%d ^ %d ", * (b + a), c);
            c = 1;
        }
        if (a != (e - 1)) {
            printf ("* ");
        }
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
int x (int a) {
    if (a == 2) {
        return 1;
    }
    int b;
    for (b = 2; b < a; ++ b) {
        if ((a % b) == 0) {
            return 0;
        }
    }
    return 1;
}
