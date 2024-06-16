#include <stdio.h>
int main (void) {
    int a, kalan, toplam, n, b;
    printf ("Kaça kadar asal sayıları yazdırayım? ");
    scanf ("%d", &n);
    toplam = 0;
    for (a = 2; a < n; ++ a) {
        for (b = 2, kalan = 1; b < a; ++ b) {
            if ((a % b) == 0) {
                kalan = 0;
            }
        }
        if (kalan == 1) {
            if ((a % 10) == 1) {
                printf ("%d\n", a);
            }
            if ((a % 10) == 7) {
                toplam += a;
            }
        }
    }
    printf ("Birler basamağı 7 olan asal sayıların toplamı: %d\n", toplam);
    return 0;
}
