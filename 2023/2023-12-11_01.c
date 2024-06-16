#include <stdio.h>
int main (void) {
    int a, b, kalan, c, n, toplam;
    printf ("Kaça kadar fibonasi serilerinin teklerinin toplanmasını istersiniz? ");
    scanf ("%d", &n);
    a = 1;
    b = 2;
    toplam = 0;
    while (b < n) {
        if ((a % 2) == 1) {
            toplam += a;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf ("Toplamın sonucu: %d\n", toplam);
    return 0;
}
