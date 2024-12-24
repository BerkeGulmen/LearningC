//Kullanıcıdan alınan sayının, rakamlarının toplamını ekran yazdır.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int * a;
    int b, c, d, e;
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
    for (b = 0; b < c; ++ b) {
        * (a + b) = d % 10;
        d /= 10;
    }
    for (b = 0, e = 0; b < c; ++ b) {
        e += * (a + b);
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
