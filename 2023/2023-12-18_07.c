#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Hangi sayının bölenlerini yazdırayım? ");
    scanf ("%d", &n);
    a = 2;
    while (a <= n) {
        if ((n % a) == 0) {
            printf ("%d\n", a);
            n /= a;
        }
        else {
            ++ a;
        }
    }
    return 0;
}
