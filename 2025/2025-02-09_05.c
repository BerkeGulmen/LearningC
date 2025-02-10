/*
Kullanıcıdan alınan sayıyı, rakamları ters çevrilmiş şekilde yeni bir sayı üretip ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, e;
    int * d;
    scanf ("%d%*c", &a);
    c = a;
    for (b = 1; ; ++ b) {
        if (a < 10) {
            break;
        }
        a /= 10;
    }
    d = (int *) calloc (b, sizeof (int));
    e = b;
    a = c;
    for (b = 0; ; ++ b) {
        * (d + b) = (a % 10);
        a /= 10;
        if (a < 10) {
            break;
        }
    }
    * (d + b + 1) = (a % 10);
    for (b = 0; b < e; ++ b) {
        printf ("%d", * (d + b));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
