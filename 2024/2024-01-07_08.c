#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    printf ("Basamak gir: ");
    scanf ("%d", &c);
    for (d = 1, e = 1; d <= c; ++ d) {
        e *= 10;
    }
    b = (int) ((a % e) / (e / 10));
    printf ("İstenilen basamaktaki rakam = %d\n", b);
    return EXIT_SUCCESS;
    return EXIT_SUCCESS;
}
