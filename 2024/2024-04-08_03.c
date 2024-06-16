//Dizide pointerle pointerde fonksiyonla sıralama.
#include <stdio.h>
#include <stdlib.h>

int * c (int);
void f (int *, int);
void z (int *, int);
void y (int *, int);
int main (int argc, char **argv, char **envp) {
    int a, * b;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    b = c (a);
    f (b, a);
    z (b, a);
    y (b, a);
    free (b);
    return EXIT_SUCCESS;
}
int * c (int a) {
    int * d;
    d = (int *) calloc (a, sizeof (int));
    return d;
}
void f (int * s, int x) {
    int a, b;
    for (a = 0; a < x; ++ a) {
        printf ("%d. elemanı gir: ", a);
        scanf ("%d", &b);
        * (s + a) = b;
    }
}
void z (int * k, int y) {
    int a, b, c;
    for (a = 0; a < (y - 1); ++ a) {
        for (b = a + 1; b < y; ++ b) {
            if (* (k + b) < * (k + a)) {
                c = * (k + b);
                * (k + b) = * (k + a);
                * (k + a) = c;
            }
        }
    }
}
void y (int * r, int t) {
    int a;
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (a = 0; a < t; ++ a) {
        printf ("%d ", * (r + a));
    }
    printf ("\n");
}
