//Kullanıcıdan alınan sayıyı, rakamları ters çevrilmiş şekilde yeni bir sayı üretip ekrana yazdır.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int * a;
    int b, c, d, e;
    scanf ("%d%*c", &c);
    d = c;
    for (b = 1; ; ++ b) {
        if (c < 10) {
            break;
        }
        c /= 10;
    }
    a = (int *) calloc (b, sizeof (int));
    for (c = 0; c < b; ++ c) {
        * (a + c) = d % 10;
        d /= 10;
    }
    for (c = 0, e = 0; c < b; ++ c) {
        e *= 10;
        e += * (a + c);
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
