#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, kalan, n, toplam;
    printf ("Kaça kadar asal sayıları yazdırayım? ");
    scanf ("%d", &n);
    for (a = 2, toplam = 0; a < n; ++ a) {
        for (b = 2, kalan = 1; b < a; ++ b) {
            if ((a % b) == 0) {
                kalan = 0;
            }
        }
        if (kalan == 1) {
            if ((a % 10) == 3) {
                printf ("%d\n", a);
            }
            if ((a % 10) == 7) {
                toplam += a;
            }
        }
    }
    printf ("Birler basamağı 7 olanların toplamının sonucu: %d\n", toplam);
    return EXIT_SUCCESS;
}
