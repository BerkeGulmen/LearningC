/*
 Kullanıcının gireceği sayı kadar ortada tek sıra yıldız olsun. Üst ve alt kısımlar azalarak devam etsin. (kullanıcı 4 girmişse:)
 *
 **
 ***
 ****
 ***
 **
 *
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        printf ("\n");
    }
    for (d = 0, c = 0, b = -- a; d < a; ++ d) {
        e = c;
        for (; c < b; ++ c) {
            printf ("*");
        }
        printf ("\n");
        c = ++ e;
    }
    return EXIT_SUCCESS;
}
