//Kullanıcıdan alınan sayıyı, rakamları ters çevrilmiş şekilde yeni bir sayı üretip ekrana yazdır.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int * a;
    int b, c, d, e;
    scanf ("%d%*c", &b);
    c = b;
    for (d = 1; ; ++ d) {
        if (b < 10) {
            break;
        }
        b /= 10;
    }
    a = (int *) calloc (d, sizeof (int));
    for (b = 0; b < d; ++ b) {
        * (a + b) = c % 10;
        c /= 10;
    }
    for (b = 0, e = 0; b < d; ++ b) {
        e *= 10;
        e += * (a + b);
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
