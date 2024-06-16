#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Kaçtan 100'e kadar geleyim? ");
    scanf ("%d", &a);
    if (a != 100) {
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
    }
    return EXIT_SUCCESS;
}
