#include <stdio.h>
int main (void) {
    int a, b, kalan, n;
    printf ("Kaça kadar asal sayıları yazayım? ");
    scanf ("%d", &n);
    a = 2;
    while (a < n) {
        b = 2;
        kalan = 1;
        while ((a % b) == 0) {
            if (kalan == 0) {
                kalan = 0;
            }
            ++ b;
        }
        if (kalan == 1) {
            printf ("%d\n", a);
            ++ a;
        }
    }
    return 0;
}
