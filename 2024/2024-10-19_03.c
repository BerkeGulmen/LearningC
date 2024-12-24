//Kullanıcıdan alınan sayıyı, rakamları ters çevrilmiş şekilde yeni bir sayı üretip ekrana yazdır.
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
    a = (int *) calloc (c, sizeof (int));
    for (b = 0; b < c; ++ b) {
        * (a + b) = d % 10;
        d /= 10;
    }
    for (b = 0, d = 0; b < c; ++ b) {
        d *= 10;
        d += * (a + b);
    }
    printf ("%d\n", d);
    return EXIT_SUCCESS;
}
