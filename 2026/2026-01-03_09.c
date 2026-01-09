/*
 Dizideki Sayıların Ortalamasını Hesapla.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    d = a;
    for (b = 0; ;) {
        scanf ("%d%*c", &c);
        b += c;
        -- a;
        if (a == 0) {
            break;
        }
    }
    printf ("%d\n", (b / d));
    return EXIT_SUCCESS;
}
