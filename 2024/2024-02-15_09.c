/*
 Kullanıcıdan kaç tane sayı gireceği bilgisi alınır. Kullanıcının girdiği sayıların ortalaması hesaplanarak ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Kaç sayı gireceksin? ");
    scanf ("%d", &a);
    for (b = 0, d = 0; b < a; ++ b) {
        printf ("Sayı gir: ");
        scanf ("%d", &c);
        d += c;
    }
    a = d / a;
    printf ("Sonuç ortalaması: %d\n", a);
    return EXIT_SUCCESS;
}
