#include <stdio.h>
#include <stdlib.h>

int c (int, int);
int main (int argc, char **argv, char **envp) {
    int a, b;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    printf ("Toplamının sonucu: %d\n", c (a, b));
    return EXIT_SUCCESS;
}
int c (int k, int s) {
    return k + s;
}
