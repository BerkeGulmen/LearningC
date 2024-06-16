#include <stdio.h>
int main (void) {
    int a, n, k;
    printf ("Kullanıcı 1. sayı istiyorum: ");
    scanf ("%d", &n);
    printf ("Kullanıcı 2. sayı istiyorum: ");
    scanf ("%d", &k);
    a = 2;
    while (a <= ((n < k) ? k : n)) {
        if ((n % a) != 0 && (k % a) != 0) {
            ++ a;
        }
        else if ((n % a) == 0) {
            n /= a;
            printf ("%d\n", a);
        }
        else {
            k /= a;
            printf ("%d\n", a);
        }
    }
    return 0;
}
