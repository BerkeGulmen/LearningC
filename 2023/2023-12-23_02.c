#include <stdio.h>
int main (void) {
    int a, b, n;
    printf ("Çarpım tablosu: ");
    scanf ("%d", &n);
    for (a = 1; a < n; ++ a) {
        b = 1;
        for (b = 1; b < n; ++ b) {
            printf ("%d X %d = %d\t", a, b, a * b);
        }
        printf ("\n");
    }
    return 0;
}
