/*
 Kullanıcıdan sayı istenir. Girilen sayının pozitif bölenleri toplanıp ekrana yazdırılır.
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        if ((a % b) == 0) {
            printf ("%d\n", b);
            c += b;
        }
    }
    printf ("Kolaydı: %d\n", c);
    return EXIT_SUCCESS;
}
