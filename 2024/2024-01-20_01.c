/*
 Ekrana kullanıcının girdiği sayıya kadar
 1
 12
 123
 1234
 12345
 123456
 1234567
 12345678...
 şeklindeki seriyi ekrana yazdır.
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Sayı gir: ");
    scanf ("%d", &b);
    for (a = 1, c = 1; c <= b; a = 1) {
        for (; c >= a; ++ a) {
            printf ("%d", a);
        }
        printf ("\n");
        ++ c;
    }
    return EXIT_SUCCESS;
}
