/*
diziler
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a [5];
    a [0] = 8;
    a [1] = 2;
    a [2] = 5;
    a [3] = 4;
    a [4] = 3;
    int n = 5, b, c;
    printf ("a dizisinin ilk elemanın değeri: %d\n", a [0]);
    printf ("a dizisinin son elemanın değeri: %d\n", a [4]);
    printf ("a dizisinin üçüncü elemanın değeri: %d\n", a [n - 3]);
    printf ("a dizisinin elemanları: \n");
    for (b = 0; b <= n - 1; ++ b) {
        printf ("%d\n", a [b]);
    }
    for (b = 0, c = 0; b <= n - 1; ++ b) {
        c += a [b];
    }
    printf ("a dizisinin toplamının sonucu: %d\n", c);
    double d = 0;
    d = ((double) c) / ((double) n);
    printf ("a dizisinin ortalaması: %lf\n", d);
    int e, g;
    g = a [0];
    for (b = 0, g = 0; b <= n - 1; ++ b) {
        e = a [b];
        if (g < e) {
            g = e;
        }
    }
    printf ("a dizisinin en büyüğünün sonucu: %d\n", g);
    g = a [0];
    for (b = 0; b <= n - 1; ++ b) {
        e = a [b];
        if (g > e) {
            g = e;
        }
    }
    printf ("a dizisinin en küçüğünün sonucu: %d\n", g);
    return EXIT_SUCCESS;
}
