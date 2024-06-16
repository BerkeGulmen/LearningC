#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Kaç sayı girmek istersiniz? ");
    scanf ("%d", &a);
    for (b = 0, d = 124124; b < a; ++ b) {
        printf ("Sayı gir: ");
        scanf ("%d", &c);
        if (c < d) {
            d = c;
        }
    }
    printf ("En küçüğünün sonucu: %d\n", d);
    return EXIT_SUCCESS;
}
