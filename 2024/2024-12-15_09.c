/*
750, 1881, 3389, 5651 sayıları a sayısına bölününce kalan eşit çıkıyor. a olabilecek sayıların en büyüğü kaçtır? (Sayı 1000'den
küçüktür.)
(377)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    for (a = 0, b = 0; a < 1000; ++ a) {
        if ((750 % a) == (1881 % a) && (750 % a) == (3389 % a) && (750 % a) == (5651 % a)) {
            if (b < a) {
                b = a;
            }
        }
    }
    printf ("%d\n", b);
    return EXIT_SUCCESS;
}
