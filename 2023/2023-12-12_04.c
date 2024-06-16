#include <stdio.h>
int main (void) {
    int a, b, c, n;
    printf ("Kaça kadar fibonasi serilerini yazdırayım? ");
    scanf ("%d", &n);
    a = 1;
    b = 2;
    c = 0;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
        printf ("b'nin sayıları: %d\n", b);
    }
    return 0;
}
