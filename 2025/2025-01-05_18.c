/*
750, 1881, 3389, 5651 sayıları a sayısına bölününce kalan eşit çıkıyor. a olabilecek sayıların en büyüğü kaçtır? (Sayı 1000'den
küçüktür.)
(377)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    for (a = 1000; a > 1; -- a) {
        b = (750 % a);
        if (b == (1881 % a) && b == (3389 % a) && b == (5651 % a)) {
            printf ("%d\n", a);
            break;
        }
    }
    return EXIT_SUCCESS;
}
