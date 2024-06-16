#include <stdio.h>
int main (void) {
    int a, n, k;
    printf ("1. sayı istiyorum: ");
    scanf ("%d", &n);
    printf ("2. sayıyı istiyorum: ");
    scanf ("%d", &k);
    a = 2;
    while (a <= ((n < k) ? k : n)) {
        if (((n % a) != 0) && ((k % a) != 0)) {
            ++ a;
        }
        else {
            printf ("%d\n", a);
            if ((n % a) == 0) {
                n /= a;
            }
            if ((k % a) == 0) {
                k /= a;
            }
        }
    }
    return 0;
}
