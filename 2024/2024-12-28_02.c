/*
0 ile 999999 arasında, tek numaralı basamaklardaki sayıların toplamı ile çift numaralı
basamaklardaki sayıların toplamı eşit kaç tane sayı vardır? (55252)
*/
#include <stdio.h>
#include <stdlib.h>
int basamak (int);

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    for (a = 0, b = 1; a < 999999; ++ a) {
        if (basamak (a) == 1) {
            ++ b;
        }
    }
    printf ("%d\n", b);
    return EXIT_SUCCESS;
}
int basamak (int a) {
    int b, c, d = 0, e = 1;
    for (b = 0, c = 0; ;) {
        if ((e % 2) == 1) {
            b += a % 10;
        }
        if ((e % 2) == 0) {
            c += a % 10;
        }
        if (a < 10) {
            break;
        }
        a /= 10;
        ++ e;
    }
    if (b == c) {
        d = 1;
    }
    if (b != c) {
        d = 0;
    }
    return d;
}
