#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, toplam;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 1, toplam = 0; b <= a; ++ b) {
        toplam += (b * 2);
    }
    printf ("Çift sayıların toplamının sonucu: %d\n", toplam);
    return EXIT_SUCCESS;
}
