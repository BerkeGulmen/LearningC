#include <stdio.h>
int main (void) {
    int a, b, n, kalan;
    printf ("Kaça kadar asal sayılar? ");
    scanf ("%d", &n);
    a = 2;
    while (a < n) {
        b = 2;
        kalan = 1;
        while (b < a) {
            if ((a % b) == 0) {
                kalan = 0;
            }
            ++ b;
        }
        if (kalan == 1) {
            printf ("%d\n", a);
        }
        ++ a;
    }
    return 0;
}
