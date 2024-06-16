#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Kaça kadar yazdırayım? ");
    scanf ("%d", &n);
    for (a = 1; a < n; ++ a) {
        if ((a % 15) == 0) {
            printf ("fizz buzz\n");
            continue;
        }
        else if ((a % 3) == 0) {
            printf ("fizz\n");
            continue;
        }
        else if ((a % 5) == 0) {
            printf ("buzz\n");
            continue;
        }
        else {
            printf ("%d\n", a);
        }
    }
    return 0;
}
