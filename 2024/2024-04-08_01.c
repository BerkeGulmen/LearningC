#include <stdio.h>
#include <stdlib.h>

int ** a (int, int);
void j (int **, int, int);
void z (int **, int, int);
void t (int **, int);

int main (int argc, char **argv, char **envp) {
    int c, n;
    printf ("Kaç satırlı?");
    scanf ("%d", &c);
    printf ("Kaç sütunlu?");
    scanf ("%d", &n);
    int ** b = a (c, n);
    j (b, c, n);
    z (b, c, n);
    t (b, c);
    return EXIT_SUCCESS;
}

int ** a (int b, int c) {
    int ** s, d;
    s = (int **) calloc (b, sizeof (int *));
    for (d = 0; d < b; ++ d) {
        * (s + d) = (int *) calloc (c, sizeof (int));
    }
    return s;
}

void j (int ** d, int x, int y) {
    int b, c, e ;
    for (c = 0; c < x; ++ c) {
        for (e = 0; e < y; ++ e) {
            printf ("%d. satır ve %d. sütün: ", c, e);
            scanf ("%d", &b);
            * (* (d + c) + e) = b;
        }
    }
}

void z (int ** d, int x, int y) {
    int b, r;
    for (b = 0; b < x; ++ b) {
        for (r = 0; r < y; ++ r) {
            printf ("%d ", * (* (d + b) + r));
        }
        printf ("\n");
    }
}

void t (int ** d, int x) {
    int b, r;
    for (b = 0; b < x; ++ b) {
        free (* (d + b));
    }
    free (d);
}
