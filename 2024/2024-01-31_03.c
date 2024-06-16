/*
 Kullanıcıdan kaç tane sayı gireceği bilgisi alınır. Kullanıcının girdiği sayıların ortalaması hesaplanarak ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Kaç tane sayının ortalamasına bakayım? ");
    scanf ("%d", &a);
    for (b = 0, c = 0, d = 0; c < a; ++ c) {
        printf ("Sayı gir: ");
        scanf ("%d", &b);
        d += b;
    }
    b = (d / a);
    printf ("Sonuç: %d\n", b);
    return EXIT_SUCCESS;
}
