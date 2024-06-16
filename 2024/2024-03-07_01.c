/*
fonksiyon.
*/
#include <stdio.h>
#include <stdlib.h>

int d;
void a (void) {
    ++ d;
}
void b (void) {
    -- d;
}
void e (void);
void f (int);
int h (int);
int main (int argc, char **argv, char **envp) {
    int c;
    d = 5;
    printf ("Sayı gir: \n");
    scanf ("%d", &c);
    if (c < 50) {
        a ();
    }
    if (c > 50) {
        b ();
    }
    printf ("%d\n", d);
    e ();
    f (c);
    printf ("%d\n", h (c));
    return EXIT_SUCCESS;
}
void e (void) {
    printf ("Ben e'yim\n");
}
void f (int g) {
    printf ("%d\n", g * 3);
}
int h (int j) {
    return j * 2;
}
