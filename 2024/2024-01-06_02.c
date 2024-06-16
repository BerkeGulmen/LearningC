#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, n;
    printf ("Kaça kadar asal sayılar? ");
    scanf ("%d", &n);
    for (a = 1; a < n; ++ a) {
        for (b = 1; b < n; ++ b) {
            printf ("%d X %d = %d\t", a, b, a * b);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
