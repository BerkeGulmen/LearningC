#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, kalan, n;
    printf ("Kaça kadar asal sayılar? ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        for (b = 2, kalan = 1; b < a; ++ b) {
            if ((a % b) == 0) {
                kalan = 0;
            }
        }
        if (kalan == 1) {
            printf ("%d\n", a);
        }
    }
    return EXIT_SUCCESS;
}
