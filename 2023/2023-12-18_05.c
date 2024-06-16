#include <stdio.h>
int main (void) {
    int a, b, n, kalan, toplam;
    printf ("Kaça kadar asal? ");
    scanf ("%d", &n);
    for (a = 2, toplam = 0; a < n; ++ a) {
        for (kalan = 1, b = 2; b < a; ++ b) {
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
    printf ("Birler basamağı 7 olanların toplamı: %d\n", toplam);
    return 0;
}
