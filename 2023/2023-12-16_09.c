#include <stdio.h>
int main (void) {
    int a, b, c, n;
    printf ("Kaça kadar fibonasi serilerini yazdırayım? ");
    scanf ("%d", &n);
    a = 1;
    b = 2;
    while (b < n) {
        printf ("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf ("%d\n", a);
    return 0;
}
