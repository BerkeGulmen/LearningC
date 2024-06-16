#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    printf ("Basamak gir: ");
    scanf ("%d", &c);
    for (d = 0, e = 1; d < c; ++ d) {
        e *= 10;
    }
    f = ((a % e) / (e / 10));
    printf ("İstenilen basamak: %d\n", f);
    return EXIT_SUCCESS;
}
