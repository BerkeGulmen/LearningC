#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Hangi sayının basamak sayısını hesaplayayım? ");
    scanf ("%d", &a);
    for (c = 1; ; ++ c) {
        for (d = 1, e = 1; d < c; ++ d) {
            e *= 10;
        }
        if (a < e) {
            break;
        }
    }
    printf ("Basamak sayısı: %d\n", c - 1);
    return EXIT_SUCCESS;
}
