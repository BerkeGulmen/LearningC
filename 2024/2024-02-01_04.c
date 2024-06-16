/*
 Kullanıcıdan sayı istenir. Girilen sayının pozitif bölenleri toplanıp ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 0, c = 1; c <= a; ++ c) {
        if ((a % c) == 0) {
            b += c;
        }
    }
    printf ("Sonuç: %d\n", b);
    return EXIT_SUCCESS;
}

