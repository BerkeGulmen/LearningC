#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    printf ("100'den farklı bir sayı gir: ");
    scanf ("%d", &a);
    if (a < 100) {
        for (; a <= 100; ++ a) {
            printf ("%d\n", a);
        }
    }
    else {
        for (; a >= 100; -- a) {
            printf ("%d\n", a);
        }
    }
    return EXIT_SUCCESS;
}
