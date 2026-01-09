/*
 İki 3 basamaklı sayının (100–999 arası) çarpımıyla oluşabilecek en büyük palindrom sayıyı bul.
 Sonuçla birlikte hangi iki sayının çarpımı olduğunu da yaz.
*/
#include <stdio.h>
#include <stdlib.h>
int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e = 0, f = 0, g = 0;
    for (a = 100; a < 1000; ++ a) {
        for (b = 100; b < 1000; ++ b) {
            c = a * b;
            d = x (c);
            if (d == 0 && c > e) {
                e = c;
                f = a;
                g = b;
            }
        }
    }
    printf ("%d %d %d\n", e, f, g);
    return EXIT_SUCCESS;
}
int x (int a) {
    int d, e, f, i = 0, j = 0;
    for (d = 0, f = 1; ;) {
        if ((a / f) != 0) {
            ++ d;
            f *= 10;
        }
        else {
            break;
        }
    }
    j = a;
    int * g;
    g = (int *) calloc (d, sizeof (int));
    for (i = 0; i < d; ++ i) {
        * (g + i) = (a % 10);
        a = a - * (g + i);
        a /= 10;
    }
    for (e = 0,  j = (d - 1); e < (d / 2); ++ e, -- j) {
        if (* (g + e) != * (g + j)) {
            free (g);
            return 1;
        }
    }
    free (g);
    return 0;
}
