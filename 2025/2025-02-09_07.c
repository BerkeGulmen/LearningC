/*
0 ile 999999 arasında, tek numaralı basamaklardaki sayıların toplamı ile çift numaralı basamaklardaki sayıların toplamı eşit kaç
tane sayı vardır? (55252)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    for (a = 0, d = 1; a < 999999; ++ a) {
        for (b = 0, c = 0, e = a; ;) {
            b += (e % 10);
            if (e < 10) {
                break;
            }
            e /= 10;
            c += (e % 10);
            if (e < 10) {
                break;
            }
            e /= 10;
        }
        if (b == c) {
            d += 1;
        }
    }
    printf ("%d\n", d);
    return EXIT_SUCCESS;
}
