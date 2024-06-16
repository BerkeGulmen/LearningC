/*
 Kullanıcının gireceği sayı kadar ortada iki sıra yıldız olsun. Üst ve alt kısımlar azalarak devam etsin. (kullanıcı 4 girmişse:)
 *
 **
 ***
 ****
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
    for (b = 1, c = 1; b <= a; ++ b) {
        for (c = 1; c <= b; ++ c) {
            printf ("*");
        }
        printf ("\n");
    }
    for (b = a, c = 0, d = 0, e = 1; e <= a; ++ e) {
        for (; c < b; ++ c) {
            printf ("*");
        }
        ++ d;
        c = d;
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
