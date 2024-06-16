#include <stdio.h>
int main (void) {
    int a, b, n;
    printf ("Çarpım ta blosu ");
    scanf ("%d", &n);
    for (a = 1; a < n; ++ a) {
        for (b = 1; b < n; ++ b) {
            printf ("%d X %d = %d\t", a, b, a * b);
        }
        printf ("\n");
    }
    return 0;
}
