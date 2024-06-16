/*
 Kullanıcıdan alınan sayıya kadar aşağıdaki toplamı uygulayıp sonucu yazdır.
 (1) + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + ... + (1 + 2 + 3 + ... + N)
 (2 için sonuç 4, 10 için sonuç 220, 50 için sonuç 22100)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 0, c = 1, d = 1; d <= a; ++ d) {
        for (c = 1; c <= d; ++ c) {
            b += c;
        }
    }
    printf ("Sonuç: %d\n", b);
    return EXIT_SUCCESS;
}

