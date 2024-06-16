#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Kaçtan 100'e kadar geri sayayım? ");
    scanf ("%d", &a);
    for (; a >= 100; -- a) {
        printf ("%d\n", a);
    }
    return EXIT_SUCCESS;
}
