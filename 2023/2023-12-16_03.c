#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Sayıları kaça kadar yazdırmak istersiniz? ");
    scanf ("%d", &n);
    a = 0;
    while (a < n) {
        if (a == 3) {
            ++ a;
            continue;
        }
        printf ("%d\n", a);
        ++ a;
    }
    return 0;
}
