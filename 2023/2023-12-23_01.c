#include <stdio.h>
int main (void) {
    int a, b, c, n;
    printf ("Sayı gir: ");
    scanf ("%d", &n);
    for (a = 1, b = 2, c = 0; a < n; ) {
        printf ("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
