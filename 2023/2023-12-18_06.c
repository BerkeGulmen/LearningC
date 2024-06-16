#include <stdio.h>
int main (void) {
    int a, b, c, n;
    printf ("Kaça kadar fibonasi serilerini gir: ");
    scanf ("%d", &n);
    for (a = 1, b = 2; a < n; ) {
        printf ("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
