#include <stdio.h>
int main (void) {
    int a, b, n, kalan, toplam;
    printf ("Kaça kadar asal sayılar? ");
    scanf ("%d", &n);
    for (a = 2, toplam = 0; a < n; ++ a) {
        for (b = 2, kalan = 1; b < a; ++ b) {
            if ((a % b) == 0) {
                kalan = 0;
            }
        }
        if (kalan == 1 && (a % 10) == 3) {
            toplam += a;
            printf ("%d\n", a);
        }
    }
    printf ("Birler basamağı 5 ile biten asal sayıların toplamı: %d\n", toplam);
    return 0;
}
