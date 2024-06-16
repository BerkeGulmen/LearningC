/*
 Kullanıcıdan alınan 3 sayının EBOB ve EKOK değerlerini bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int n, k, m, ekok, ebob, a;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &n);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &k);
    printf ("3. sayıyı gir: ");
    scanf ("%d", &m);
    for (a = 2, ekok = 1, ebob = 1; a <= n || a <= m || a <= k; ) {
        if ((m % a) != 0 && (k % a) != 0 && (n % a) != 0) {
            ++ a;
        }
        else {
            printf ("%d\n", a);
            ekok *= a;
            if ((m % a) == 0 && (k % a) == 0 && (n % a) == 0) {
                ebob *= a;
            }
            if ((n % a) == 0) {
                n /= a;
            }
            if ((m % a) == 0) {
                m /= a;
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
