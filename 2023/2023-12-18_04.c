#include <stdio.h>
int main (void) {
    int a, b, n, kalan;
    printf ("Kaça kadar asal? ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        for (kalan = 1, b = 2; b < a; ++ b) {
            if ((a % b) == 0) {
                kalan = 0;
            }
        }
        if (kalan == 1) {
            printf ("%d\n", a);
        }
    }
    return 0;
}
