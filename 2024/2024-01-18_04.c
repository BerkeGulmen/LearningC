#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (c = 0; ; ++ c) {
        for (d = 1, e = 1; d < c; ++ d) {
            e *= 10;
        }
        if (a < e) {
            break;
        }
    }
    printf ("Basamak sayısı: %d\n", c - 1);
    for (b = 0; b < (c - 1); ++ b) {
        for (d = 0, e = 1; d < b; ++ d) {
            e *= 10;
        }
        f = ((a % e) / (e / 10));
        printf ("İstenilen basamak: %d\n", f);
    }
    return EXIT_SUCCESS;
}
