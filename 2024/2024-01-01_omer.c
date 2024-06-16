#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f, g;
    a = 1235827491;
    b = a % 10;
    printf ("Birler basamağı: %d\n", b);
    b = (int)(a / 10);
    printf ("Birler basamağını atınca: %d\n", b);
    b = (int)(a / 10) % 10;
    printf ("Onlar basamağı: %d\n", b);
    b = (int)(a / 100) % 10;
    printf ("Yüzler basamağı: %d\n", b);
    b = (int)(a / 1000) % 10;
    printf ("Binler basamağı: %d\n", b);
    for (c = 1; ; ++ c) {
        for (d = 1, e = 1; d < c; ++ d) {
            e *= 10;
        }
        if (a < e) {
            break;
        }
    }
    printf ("Basamak sayısı: %d\n", c - 1);
    for (f = 1, g = 1; f < (c - 1); ++ f) {
        g *= 10;
    }
    b = (int)(a / g) % 10;
    printf ("En baştaki: %d\n", b);
    return EXIT_SUCCESS;
}
