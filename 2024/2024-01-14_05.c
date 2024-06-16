#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, sonuc, c;
    printf ("Kaç tane sayı girmeni söyliyeyim? ");
    scanf ("%d", &a);
    for (b = 0, sonuc = 0; b < a; ++ b) {
        printf ("Sayı gir: ");
        scanf ("%d", &c);
        if (c > sonuc) {
            sonuc = c;
        }
    }
    printf ("En büyüğünün sonucu: %d\n", sonuc);
    return EXIT_SUCCESS;
}
