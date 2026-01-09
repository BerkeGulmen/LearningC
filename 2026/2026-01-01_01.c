/*
Sayı çiftse, rakamları toplamı tek
Sayı tekse, rakamları toplamı çift
*/
#include <stdio.h>
#include <stdlib.h>

int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, * d, e;
    scanf ("%d%*c", &a);
    d = (int *) calloc (a, sizeof (int));
    printf ("\n");
    printf ("These are good numbers: ");
    for (b = 0, e = 0; b < a; ++ b) {
        scanf ("%d%*c", &*(d + b));
        if ((* (d + b) % 2) == 0) {
            c = x (* (d + b));
            if ((c % 2) == 1) {
                printf ("%d ", * (d + b));
                e += 1;
            }
        }
        else {
            c = x (* (d + b));
            if ((c % 2) == 0) {
                printf ("%d ", * (d + b));
                e += 1;
            }
        }
    }
    printf ("\nThere are %d good numbers.\n", e);
    free (d);
    return EXIT_SUCCESS;
}
int x (int a) {
    int b;
    for (b = 0; ;) {
        if (a == 0) {
            break;
        }
        b += a % 10;
        a /= 10;
    }
    return b;
}
