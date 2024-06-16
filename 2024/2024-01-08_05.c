#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, k, n, m, ebob, ekok;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &n);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &k);
    printf ("3. sayıyı gir: ");
    scanf ("%d", &m);
    for (a = 2, ebob = 1, ekok = 1; a <= n || a <= m || a <= k; ) {
        if ((n % a) != 0 && (m % a) != 0 && (k % a) != 0) {
            ++ a;
        }
        else {
            printf ("%d\n", a);
            ekok *= a;
            if ((n % a) == 0 && (m % a) == 0 && (k % a) == 0) {
                ebob *= a;
            }
            if ((n % a) == 0) {
                n /= a;
            }
            if ((k % a) == 0) {
                k /= a;
            }
            if ((m % a) == 0) {
                m /= a;
            }
        }
    }
    printf ("EKOK'un sonucu: %d\n", ekok);
    printf ("EBOB'un sonucu: %d\n", ebob);
    return EXIT_SUCCESS;
}
