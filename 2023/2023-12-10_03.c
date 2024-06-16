#include <stdio.h>
int main (void) {
    int a, b, n, c, toplam;
    printf ("Kaça kadar? ");
    scanf ("%d", &n);
    for (a = 1, b = 2, toplam = 0; b < n;) {
        if ((b % 2) == 0) {
            toplam += b;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf ("%d\n", toplam);
    return 0;
}
