#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    if (a < b) {
        c = a;
        d = b;
    }
    else {
        c = b;
        d = a;
    }
    for (; c <= d; ++ c) {
        printf ("%d\n", c);
    }
    return EXIT_SUCCESS;
}
