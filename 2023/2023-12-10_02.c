#include <stdio.h>
int main (void) {
    int a, n, toplam;
    printf ("Kaça kadar sayıları yazdırıyım? ");
    scanf ("%d", &n);
    toplam = 0;
    for (a = 0; a < n; ++ a) {
        if ((a % 3) == 0 || (a % 5) == 0) {
            toplam += a;
        }
    }
    printf ("Toplamın sonucu: %d\n", toplam);
    return 0;
}
