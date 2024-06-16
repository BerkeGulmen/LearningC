#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, n, k, ekok;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &n);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &k);
    for (a = 2, ekok = 1; a <=  ((n < k) ? k : n);) {
        if ((n % a) != 0 && (k % a) != 0) {
            ++ a;
        }
        else {
            printf ("%d\n", a);
            ekok *= a;
            if ((n % a) == 0) {
                n /= a;
            }
            if ((k % a) == 0) {
                k /= a;
            }
        }
    }
    printf ("EKOK: %d\n", ekok);
    return EXIT_SUCCESS;
}
