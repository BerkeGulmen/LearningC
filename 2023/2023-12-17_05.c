#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Kullanıcı sayı istiyorum: ");
    scanf ("%d", &n);
    a = 2;
    while (a <= n) {
        if ((n % a) == 0) {
            n /= a;
            printf ("%d\n", a);
        }
        else {
            ++ a;
        }
    }
    return 0;
}
