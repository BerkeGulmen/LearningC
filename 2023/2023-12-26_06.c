#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, n, k, ekok, ebob;
    printf ("1. sayının bölenlerini yazdırayım: ");
    scanf ("%d", &n);
    printf ("2. sayının bölenlerini yazdırayım: ");
    scanf ("%d", &k);
    for (a = 2, ekok = 1, ebob = 1; a <= ((n < k) ? k : n); ) {
        if (((n % a) != 0) && ((k % a) != 0)) {
            ++ a;
        }
        else {
            printf ("%d\n", a);
            ekok *= a;
            if (((n % a) == 0) && ((k % a) == 0)) {
                ebob *= a;
            }
            if ((n % a) == 0) {
                n /= a;
            }
            if ((k % a) == 0) {
                k /= a;
            }
        }
    }
    printf ("EKOK'un sonucu: %d\n", ekok);
    printf ("EBOB'un sonucu: %d\n", ebob);
    return EXIT_SUCCESS;
}
