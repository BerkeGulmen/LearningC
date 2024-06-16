/*
 Kullanıcıdan alınan iki sayının aralarında asal olup olmadığını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    for (c = 2; c <= a || c <= b; ++ c) {
        if ((a % c) == 0 && (b % c) == 0) {
            printf ("Girdiğiniz sayı aralarında asal değildir: %d %d\n", a, b);
            break;
        }
    }
    if (c == a || c == b) {
        printf ("Girdiğiniz sayı aralarında asaldır: %d %d\n", a, b);
    }
    return EXIT_SUCCESS;
}
