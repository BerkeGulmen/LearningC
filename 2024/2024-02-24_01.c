/*
Bir boyutlu dizi
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int n, b, c;
    n = 9;
    int a [] = {7, 4, 9, 1, 2, 6, 3, 8, 5};
    printf ("a dizisinin ilk elemanı: %d\n", a [0]);
    printf ("a dizisinin son elemanı: %d\n", a [n - 1]);
    for (b = 0; b < n; ++ b) {
        printf ("%d ", a [b]);
    }
    printf ("\n");
    for (c = 0, b = 0; b < n; ++ b) {
        c += a [b];
    }
    printf ("a dizisinin elemanlarının toplamının sonucu: %d\n", c);
    double e;
    e = ((double) c) / ((double) n);
    printf ("a dizisinin ortalamasının sonucu: %lf\n", e);
    int d [n];
    for (b = 0; b < n; ++ b) {
        d [b] = a [b];
        printf ("%d ", d [b]);
    }
    printf ("\n");
    int f [n];
    for (b = 0; b < n; ++ b) {
        f [b] = 3 * a [b];
        printf ("%d ", f [b]);
    }
    printf ("\n");
    int g [n];
    for (b = 0; b < n; ++ b) {
        g [b] = a [n - 1 - b];
        printf ("%d ", g [b]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
