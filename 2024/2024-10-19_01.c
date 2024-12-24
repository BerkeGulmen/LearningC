//Kullanıcıdan alınan sayının, rakamlarını tek tek ekrana yazdır.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int * a;
    int b, c, d;
    scanf ("%d%*c", &b);
    d = b;
    for (c = 1; ; ++ c) {
        if (b < 10) {
            break;
        }
        b /= 10;
    }
    b = d;
    a = (int *) calloc (c, sizeof (int));
    for (d = 0; d < c; ++ d) {
        * (a + d) = b % 10;
        b /= 10;
    }
    printf ("1. Basamak Değerine göre:\n");
    for (d = 0; d < c; ++ d) {
        printf ("%d\n", * (a + d));
    }
    printf ("2. Rakam sıralamasına göre:\n");
    for (d = c; d > 0; -- d) {
        printf ("%d\n", * (a + d - 1));
    }
    return EXIT_SUCCESS;
}
