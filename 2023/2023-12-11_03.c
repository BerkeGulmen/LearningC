#include <stdio.h>
int main (void) {
    int a, b, n, kalan;
    printf ("Kaça kadar asal sayılar? ");
    scanf ("%d", &n);
    for (a = 2, b = 2; a < n; ++ a) {
        for (b = 2, kalan = 1; b < a; ++ b) {
            if ((a % b) == 0) {
                kalan = 0;
            }
        }
        if (kalan == 1) {
            if ((a % 10) == 3) {
                printf ("%d\n", a);
            }
        }
    }
    return 0;
}
