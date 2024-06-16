#include <stdio.h>
int main (void) {
    int a, b, n;
    printf ("Kaça kadar çarpım tablosu yazdırayım? ");
    scanf ("%d", &n);
    a = 1;
    b = 1;
    while (a < n) {
        b = 1;
        while (b < n) {
            printf ("%d X %d = %d\t", a, b, a * b);
            ++ b;
        }
        ++ a;
        printf ("\n");
    }
    return 0;
}
