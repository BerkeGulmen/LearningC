#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g;
    printf ("Satırı kaç? ");
    scanf ("%d", &a);
    printf ("Sütunu kaç? ");
    scanf ("%d", &c);
    int b [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("Satırın %d. sütunun %d. elemanını gir: ", d, e);
            scanf ("%d", &b [d] [e]);
        }
    }
    int x [a - 1] [c - 1];
    printf ("Hangi satırı istemiyorsun? ");
    scanf ("%d", &f);
    printf ("Hangi sütunu istemiyorsun? ");
    scanf ("%d", &g);
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            if (d == f) {
                break;
            }
            if (e == g) {
                continue;
            }
            if (e < g && d < f) {
                x [d] [e] = b [d] [e];
            }
            if (e > g && d < f) {
                x [d] [e - 1] = b [d] [e];
            }
            if (e < g && d > f) {
                x [d - 1] [e] = b [d] [e];
            }
            if (e > g && d > f) {
                x [d - 1] [e - 1] = b [d] [e];
            }
        }
    }
    for (d = 0; d < (a - 1); ++ d) {
        for (e = 0; e < (c - 1); ++ c) {
            printf ("%d ", x [d] [e]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
