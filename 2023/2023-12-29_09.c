#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, toplam;
    printf ("Kaçtan 100'e kadar geleyim? ");
    scanf ("%d", &a);
    toplam = 0;
    if (a != 100) {
        if (a < 100) {
            for (toplam = 0; a <= 100; ++ a) {
                if ((a % 2) == 1 || (a % 2) != 0) {
                    toplam += a;
                }
            }
        }
        else {
            for (toplam = 0; a >= 100; -- a) {
                if ((a % 2) == 1 || (a % 2) != 0) {
                    toplam += a;
                }
            }
        }
    }
    printf ("Toplamın sonucu: %d\n", toplam);
    return EXIT_SUCCESS;
}
